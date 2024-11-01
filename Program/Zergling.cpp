#include "Zergling.h"

Zergling::Zergling()
{
	health = 35;
	initializeHealth = health;
}

void Zergling::Recovery()
{
	health = initializeHealth;
}
