#include "Zerg.h"

void Zerg::Recovery()
{
	cout << "Zerg Recovery" << endl;
}

void Zerg::OnDamage(int damage)
{
	health -= damage;
}

int Zerg::Health()
{
	return health;
}
