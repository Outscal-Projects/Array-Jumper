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

		void initialize();
		void update();
		void render();
	};
}