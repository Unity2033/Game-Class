#include "Hydralisk.h"

Hydralisk::Hydralisk()
{
	health = 80;
	initializeHealth = health;

}

void Hydralisk::Recovery()
{
	health = initializeHealth;
}
