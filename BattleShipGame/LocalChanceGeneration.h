#pragma once
#include "IChanceGenerationStrategy.h"
#include "IInputProvider.h"
#include "player.h"

class LocalChanceGeneration : public IChanceGenerationStrategy
{
private:
	IInputProvider *inputProvider;

public:
	LocalChanceGeneration(IInputProvider *_inputProvider)
	{
		this->inputProvider = _inputProvider;
	}
	// Inherited via IChanceGenerationStrategy
	virtual PlayerChanceTarget getPlayerChanceTarget(std::vector<Player*> opponents) override;
};

