#include "../../header/Level/LevelService.h"
#include "../../header/Level/LevelController.h"

namespace Level
{
	LevelService::LevelService()
	{
		level_controller = new LevelController();
	}

	LevelService::~LevelService() { destroy(); }

	BoxDimensions LevelService::getBoxDimensions() const { return level_controller->getBoxDimensions(); }

	BlockType LevelService::getCurrentBoxValue(int currentPosition) const { return level_controller->getCurrentBoxValue(currentPosition); }

	int LevelService::getCurrentLevelNumber() const { return level_controller->getCurrentLevelNumber(); }

	int LevelService::loadNextLevel() { return level_controller->loadNextLevel(); }

	bool LevelService::isLastLevel() { return level_controller->isLastLevel(); }

	void LevelService::resetLevelIndex() { level_controller->resetLevelIndex(); }

	void LevelService::intialize()
	{
		level_controller->initialize();
		resetLevelIndex();
	}

	void LevelService::update() { level_controller->update(); }

	void LevelService::render() { level_controller->render(); }

	void LevelService::destroy() { delete(level_controller); }
}