#pragma once
#include <iostream>

using namespace std;

class Weapon
{
protected:
	int attack;
	int intersection;

public:

#pragma region 함수의 오버라이드
	// 상위 클래스에 있는 함수를 하위 클래스에서 
	// 재정의하여 사용하는 기능입니다.

	void Attack();

    // 함수의 오버라이드는 상속 관계에서만 이루어지며,
	// 하위 클래스에서 함수를 재정의할 때 상위 클래스의
	// 함수 형태와 일치해야 합니다.
#pragma endregion

};

