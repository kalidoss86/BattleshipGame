#pragma once
#include "PlayerInput.h"

class IInputProvider {
public:
	virtual PlayerInput takeInput() = 0;
};