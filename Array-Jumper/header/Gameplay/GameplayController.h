#pragma once
#include "../Level/BlockType.h"

namespace Gameplay
{
	class GameplayController
	{
	public:
		void processObstacle();
		bool isObstacle(Level::BlockType value);
		void onPositionChanged(int position);

		void initialize();
		void update();
		void render();
	};
}