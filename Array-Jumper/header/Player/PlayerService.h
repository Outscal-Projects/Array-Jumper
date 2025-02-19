#pragma once

namespace Player
{
	class PlayerController;
	class PlayerService
	{
	private:
		PlayerController* player_controller;

		void destroy();

	public:
		PlayerService();
		~PlayerService();

		void takeDamage();
		void levelComplete();

		void initialize();
		void update();
		void render();
	};
}