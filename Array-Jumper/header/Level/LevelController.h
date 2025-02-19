#pragma once
#include "LevelModel.h"

namespace Level
{
	class LevelView;

	class LevelController
	{
	private:
		LevelView* level_view;
		LevelModel* level_model;

	public:
		LevelController();
		~LevelController();

		BoxDimensions getBoxDimensions() const;
		BlockType getCurrentBoxValue(int currentPosition) const;

		void initialize();
		void update();
		void render();
	};
}