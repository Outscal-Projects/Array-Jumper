#pragma once
#include "../../header/Level/LevelView.h"

namespace Level
{
	class LevelController;

	class LevelService
	{
	private:
		LevelController* level_controller;

		void destroy();
	public:
		LevelService();
		~LevelService();

		BoxDimensions getBoxDimensions() const;
		BlockType getCurrentBoxValue(int current_position) const;
		int getCurrentLevelNumber() const;

		int loadNextLevel();
		bool isLastLevel();
		void resetLevelIndex();

		void intialize();
		void update();
		void render();
	};
}