#pragma once
#include "../../header/UI/UIElement/ImageView.h"
#include "../../header/Level/LevelController.h"

using namespace UI::UIElement;

namespace Level
{
	class LevelView
	{
	private:
		sf::RenderWindow* game_window;
		LevelController* level_controller;

		ImageView* background_image;
		ImageView* box_image;
		ImageView* target_overlay_image;
		ImageView* letter_one_overlay_image;
		ImageView* letter_two_overlay_image;
		ImageView* letter_three_overlay_image;
		ImageView* obstacle_one_overlay_image;
		ImageView* obstacle_two_overlay_image;

		BoxDimensions box_dimensions;
		const float background_alpha = 110.f;

		void createImages();
		void initializeImages();
		void updateImages();
		void calculateBoxDimensions();
		ImageView* getBoxOverlayImage(BlockType block_type);
		void drawBox(sf::Vector2f position);
		void drawBoxValue(sf::Vector2f position, BlockType box_value);
		void drawLevel();
		void deleteImages();

	public:
		LevelView(LevelController* controller);
		~LevelView();

		void initialize();
		void update();
		void render();
	};
}