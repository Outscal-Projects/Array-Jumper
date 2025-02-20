#include "../../header/Gameplay/GameplayService.h"
#include "../../header/Gameplay/GameplayController.h"

namespace Gameplay
{
	void GameplayService::onPositionChanged(int position) { gameplay_controller->onPositionChanged(position); }

	void GameplayService::onDeath() { gameplay_controller->onDeath(); }

	void GameplayService::initialize() { gameplay_controller->initialize(); }

	void GameplayService::update() { gameplay_controller->update(); }

	void GameplayService::render() { gameplay_controller->render(); }
}