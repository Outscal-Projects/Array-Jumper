#pragma once
#include "../../header/Event/EventService.h"
#include "../../header/Gameplay/GameplayController.h"

namespace Player
{
	class PlayerView;
	class PlayerModel;
	enum MovementDirection;
	enum class PlayerState;
	enum BlockType;
	class PlayerController
	{
	private:
		PlayerModel* player_model;
		PlayerView* player_view;
		Gameplay::GameplayController* gameplay_controller;
		Event::EventService* event_service;

		void destroy();

	public:
		PlayerController();
		~PlayerController();

		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);
		int getCurrentPosition() const;
		int getCurrentLives() const;
		void takeDamage();
		void onDeath();
		void move(MovementDirection direction);
		void jump(MovementDirection direction);
		bool isPositionInBound(int targetPosition);
		void readInput();

		void initialize();
		void update();
		void render();
	};
}