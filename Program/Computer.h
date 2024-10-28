#pragma once
#include "Keyboard.h"
#include "Mouse.h"

class Computer : public Keyboard, Mouse
{
public:
	Computer();

	void Use();

	~Computer();
};

