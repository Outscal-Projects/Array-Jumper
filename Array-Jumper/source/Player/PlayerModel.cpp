#include "../../header/Player/PlayerModel.h"

namespace Player
{
	PlayerState PlayerModel::getPlayerState() const
	{
		return player_state;
	}

	void PlayerModel::setPlayerState(PlayerState new_player_state)
	{
		player_state = new_player_state;
	}

	int PlayerModel::getCurrentPosition() const
	{
		return current_position;
	}

	void PlayerModel::setCurrentPosition(int new_position)
	{
		current_position = new_position;
	}
}