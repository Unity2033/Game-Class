#pragma once
#include "Terran.h"
class SiegeTank : public Terran
{
public:
	SiegeTank();

	virtual void Move() override;
};

