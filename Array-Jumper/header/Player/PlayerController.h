#pragma once
#include "../../header/Event/EventService.h"

namespace Player
{
	class PlayerView;
	class PlayerModel;
	enum MovementDirection;
	enum class PlayerState;
	class PlayerController
	{
	private:
		PlayerModel* player_model;
		PlayerView* player_view;
		Event::EventService* event_service;

		void destroy();

	public:
		PlayerController();
		~PlayerController();

		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);
		int getCurrentPosition() const;
		void move(MovementDirection direction);
		bool isPositionInBound(int targetPosition);
		void readInput();

		void initialize();
		void update();
		void render();
	};
}