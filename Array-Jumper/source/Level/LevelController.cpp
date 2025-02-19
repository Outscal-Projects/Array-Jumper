#include "../../header/Level/LevelController.h"
#include "../../header/Level/LevelView.h"
#include "../../header/Level/LevelModel.h"

namespace Level
{
	LevelController::LevelController()
	{
		level_view = new LevelView(this);
		level_model = new LevelModel();
	}

	LevelController::~LevelController() {}

	BoxDimensions LevelController::getBoxDimensions() const{ return level_view->getBoxDimensions(); }

	BlockType LevelController::getCurrentBoxValue(int currentPosition) const { return level_model->getCurrentBoxValue(currentPosition); }

	void LevelController::initialize() { level_view->initialize(); }

	void LevelController::update() { level_view->update(); }

	void LevelController::render() { level_view->render(); }
}