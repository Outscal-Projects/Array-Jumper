#pragma once
#include "LevelModel.h"

namespace Level
{
	class LevelView;
	class LevelModel;

	class LevelController
	{
	private:
		LevelView* level_view;
		LevelModel* level_model;
		LevelData current_level_data;

	public:
		LevelController();
		~LevelController();

		BlockType getCurrentBoxValue(int currentPosition);

		void initialize();
		void update();
		void render();
	};
}