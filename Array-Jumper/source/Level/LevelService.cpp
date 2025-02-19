#include "../../header/Level/LevelService.h"
#include "../../header/Level/LevelController.h"

namespace Level
{
	LevelService::LevelService()
	{
		level_controller = new LevelController();
	}

	LevelService::~LevelService() { destroy(); }

	BoxDimensions LevelService::getBoxDimensions() const { return level_controller->getBoxDimensions(); }

	BlockType LevelService::getCurrentBoxValue(int currentPosition) const { return level_controller->getCurrentBoxValue(currentPosition); }

	void LevelService::intialize() { level_controller->initialize(); }

	void LevelService::update() { level_controller->update(); }

	void LevelService::render() { level_controller->render(); }

	void LevelService::destroy() { delete(level_controller); }
}