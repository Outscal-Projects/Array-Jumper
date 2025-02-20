#include "../../header/Gameplay/GameplayController.h"
#include "../../header/Global/ServiceLocator.h"
#include "../../header/Main/GameService.h"
#include "iostream"

namespace Gameplay
{
	void GameplayController::processObstacle()
	{
		Global::ServiceLocator::getInstance()->getPlayerService()->takeDamage();
		Global::ServiceLocator::getInstance()->getSoundService()->playSound(Sound::SoundType::DEATH);
	}

	bool GameplayController::isObstacle(Level::BlockType value)
	{
		if (value == Level::BlockType::OBSTACLE_ONE || value == Level::BlockType::OBSTACLE_TWO)
			return true;
		return false;
	}

	bool GameplayController::isEndBlock(Level::BlockType value)
	{
		if (value == Level::BlockType::TARGET)
			return true;
		return false;
	}

	void GameplayController::processEndBlock()
	{
		Global::ServiceLocator::getInstance()->getPlayerService()->levelComplete();
		Global::ServiceLocator::getInstance()->getSoundService()->playSound(Sound::SoundType::LEVEL_COMPLETE);
		Main::GameService::setGameState(Main::GameState::CREDITS);

		if (isLastLevel())
		{
			std::cout << "Game Won";
			gameWon();
			return;
		}

		std::cout << "Loading next level";
		loadNextLevel();
	}

	void GameplayController::onPositionChanged(int position)
	{
		Level::BlockType value = Global::ServiceLocator::getInstance()->getLevelService()->getCurrentBoxValue(position);

		if (isObstacle(value))
			processObstacle();
		if (isEndBlock(value))
			processEndBlock();
	}

	bool GameplayController::isLastLevel()
	{
		return Global::ServiceLocator::getInstance()->getLevelService()->isLastLevel();
	}

	void GameplayController::loadNextLevel()
	{
		Global::ServiceLocator::getInstance()->getLevelService()->loadNextLevel();
	}

	void GameplayController::onDeath() { gameOver(); }

	void GameplayController::gameOver()
	{
		Main::GameService::setGameState(Main::GameState::CREDITS);
		Global::ServiceLocator::getInstance()->getSoundService()->playSound(Sound::SoundType::DEATH);
	}

	void GameplayController::gameWon()
	{
		Main::GameService::setGameState(Main::GameState::CREDITS);
		Global::ServiceLocator::getInstance()->getSoundService()->playSound(Sound::SoundType::LEVEL_COMPLETE);
	}

	void GameplayController::initialize() {}

	void GameplayController::update() {}

	void GameplayController::render() {}
}