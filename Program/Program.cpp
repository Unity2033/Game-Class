#include <iostream>
#include "Banana.h"

using namespace std;

int main()
{
#pragma region 가상 소멸자
	// 객체가 소멸될 때 현재 참고하고 있는 객체와
	// 상관 없이 모두 호출되는 소멸자입니다.

	Fruit * fruit = new Banana();

	delete fruit;

	// 상속된 객체가 해제될 때 하위 클래스의 소멸자가
	// 먼저 실행되고, 상위 클래스의 소멸자가 실행되어야
	// 하기 때문에 실행 시간에 메모리에 할당된 객체를
	// 확인하고 차례대로 소멸시켜야 합니다.
#pragma endregion



	return 0;
}

