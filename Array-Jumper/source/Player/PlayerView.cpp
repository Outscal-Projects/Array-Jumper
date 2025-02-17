#include "../../header/Player/PlayerView.h"

namespace Player
{
	PlayerView::PlayerView(PlayerController* controller)
	{
		player_controller = controller;
		game_window = nullptr;
		player_image = new UI::UIElement::ImageView();
	}

	PlayerView::~PlayerView() {}

	void PlayerView::initializePlayerImage()
	{
		player_image->initialize(Config::character_texture_path,
			player_width,
			player_height,
			sf::Vector2f(0, 0));
	}

	void PlayerView::drawPlayer()
	{
		player_image->render();
	}

	void PlayerView::loadPlayer()
	{
		calculatePlayerDimensions();
		initializePlayerImage();
	}

	void PlayerView::calculatePlayerDimensions()
	{
		player_height = 1000.f;
		player_width = 1000.f;
	}

	void PlayerView::initialize()
	{
		game_window = ServiceLocator::getInstance()->getGraphicService()->getGameWindow();
		loadPlayer();
	}

	void PlayerView::updatePlayerPosition()
	{
		player_image->setPosition(calulcatePlayerPosition());
	}

	sf::Vector2f PlayerView::calulcatePlayerPosition()
	{
		return sf::Vector2f(0, 0);
	}

	void PlayerView::update()
	{
		updatePlayerPosition();
	}

	void PlayerView::render()
	{
		switch (player_controller->getPlayerState())
		{
		case PlayerState::ALIVE:
			drawPlayer();
			break;
		}
	}
}