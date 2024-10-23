#pragma once
#include <iostream>

using namespace std;

class Terran
{
protected:
	int attack;
	int defense;

public:
	// 가상 함수의 경우 가상 함수 테이블을 사용하여
	// 호출되는 함수를 실행 시간에 결정하며, 정적으로
	// 선언된 함수는 가상 함수로 선언할 수 없습니다.
	virtual void Move();

	// 가상 함수는 한 개 이상의 가상 함수를 포함하는
	// 클래스가 있을 때 객체 주소에 가상 함수 테이블을 추가합니다.
};

