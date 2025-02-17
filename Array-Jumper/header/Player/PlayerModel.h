#pragma once

namespace Player
{
	enum class PlayerState
	{
		ALIVE,
		DEAD
	};

	class PlayerModel
	{
	private: 
		PlayerState player_state;
		int current_position;
			
	public:
		PlayerState getPlayerState() const;
		void setPlayerState(PlayerState new_player_state);

		int getCurrentPosition() const;
		void setCurrentPosition(int new_position);
	};
}