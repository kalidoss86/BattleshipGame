#pragma once
#include "IInputProvider.h"
#include <iostream>
#include <sstream>
#include <vector>
class SysInInputProvider : public IInputProvider
{
public:
	// Inherited via IInputProvider
	virtual PlayerInput takeInput() override;
};

