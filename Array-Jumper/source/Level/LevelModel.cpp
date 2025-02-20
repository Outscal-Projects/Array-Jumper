#include "../../header/Level/LevelModel.h"

namespace Level
{
	LevelModel::LevelModel() {}
	LevelModel::~LevelModel() {}

	BlockType LevelModel::getCurrentBoxValue(int currentPosition) const
	{
		return level_configuration.levels[current_level_index].level_boxes[currentPosition];
	}

	int LevelModel::getCurrentLevelNumber() const { return current_level_index + 1; }

	int LevelModel::loadNextLevel() { return current_level_index++; }

	bool LevelModel::isLastLevel()
	{
		if (current_level_index == LevelConfiguration::NUMBER_OF_LEVELS - 1)
			return true;
		return false;
	}

	void LevelModel::resetLevelIndex() { current_level_index = 0; }
}