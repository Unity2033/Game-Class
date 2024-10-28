#include "Mouse.h"

Mouse::Mouse()
{
	cout << "Create Mouse" << endl;
}

void Mouse::OnEnter()
{
	cout << "Mouse Enter" << endl;
}

Mouse::~Mouse()
{
	cout << "Release Mouse" << endl;
}

