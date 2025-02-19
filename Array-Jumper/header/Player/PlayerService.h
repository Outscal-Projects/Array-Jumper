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
		int getCurrentLives() const;

		void initialize();
		void update();
		void render();
	};
}