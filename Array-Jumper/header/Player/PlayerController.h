#pragma once

namespace Player
{
	class PlayerView;
	class PlayerModel;
	enum class PlayerState;
	class PlayerController
	{
	private:
		PlayerModel* player_model;
		PlayerView* player_view;

		void destroy();

	public:
		PlayerController();
		~PlayerController();

		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);
		int getCurrentPosition() const;

		void initialize();
		void update();
		void render();
	};
}