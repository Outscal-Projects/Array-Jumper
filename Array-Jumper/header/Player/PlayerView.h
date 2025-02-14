#pragma once
#include "../../header/UI/UIElement/ImageView.h"
#include "../../header/Global/Config.h"
#include "../../header/Global/ServiceLocator.h"

using namespace Global;

namespace Player
{
	class PlayerController;
	class PlayerView
	{
	private:
		sf::RenderWindow* game_window;
		UI::UIElement::ImageView* player_image;

		float player_height;
		float player_width;

		void initializePlayerImage();
		void drawPlayer();
		void loadPlayer();
		void calculatePlayerDimensions();
		void updatePlayerPosition();
		sf::Vector2f calulcatePlayerPosition();

	public:
		PlayerView();
		~PlayerView();

		void initialize();
		void update();
		void render();
	};
}