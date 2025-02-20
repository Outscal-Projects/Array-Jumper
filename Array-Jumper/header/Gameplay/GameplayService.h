#pragma once

namespace Gameplay
{
	class GameplayController;
	class GameplayService
	{
	private:
		GameplayController* gameplay_controller;
	public:
		void onPositionChanged(int position);
		void onDeath();

		void initialize();
		void update();
		void render();
	};
}