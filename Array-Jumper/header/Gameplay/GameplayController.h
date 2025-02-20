#pragma once
#include "../Level/BlockType.h"

namespace Gameplay
{
	class GameplayController
	{
	public:
		void processObstacle();
		bool isObstacle(Level::BlockType value);
		bool isEndBlock(Level::BlockType value);
		void processEndBlock();
		void onPositionChanged(int position);
		bool isLastLevel();
		void loadNextLevel();
		void onDeath();
		void gameOver();
		void gameWon();

		void initialize();
		void update();
		void render();
	};
}