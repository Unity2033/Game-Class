#include <iostream>

char character = 'C';

void OnDamage(float damage = 0.0f)
{
	std::cout << damage << " 만큼 피해를 입었습니다." << std::endl;
}

// 기본 매개 변수를 지정하기 위해서는 오른쪽에서 부터 지정해주어야 합니다.
void Coordinate(float x , float y, float z = 30)
{
	std::cout << "x의 값 : " << x << std::endl;
	std::cout << "y의 값 : " << y << std::endl;
	std::cout << "z의 값 : " << z << std::endl;
}

int main()
{
#pragma region 스트림
	// 시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름입니다.

	// int data = 0;

	// std::cout << "data 변수의 값 입력 : ";

	// std::cin >> data;

	// std::cout << "data 변수의 값 : " << data << std::endl;

	// 스트림은 운영체제에 의해 생성되며, 스트림 자체에 버러라는
	// 임시 메모리 공간이 존재합니다.
#pragma endregion

#pragma region 동적 할당
	// 프로그램을 실행 중에 필요한 만큼 메모리를
	// 할당하는 작업입니다.

	// int * ptr = new int;
	// int* dynamicArray = new int[3];
	// 
	// *ptr = 9999;
	// 
	// dynamicArray[0] = 10;
	// dynamicArray[1] = 20;
	// dynamicArray[2] = 30;
	// 
	// for (int i = 0; i < 3; i++)
	// {
	// 	std::cout << "dynamicArray[" << i << "]" << " : " << dynamicArray[i] << std::endl;
	// }
	// 
	// std::cout << "ptr이 가리키고 있는 메모리 값 : " << *ptr << std::endl;
	// std::cout << "ptr이 가리키고 있느 메모리 주소 : " << ptr << std::endl;
	// 
	// delete [ ] dynamicArray;
	// delete ptr;

#pragma endregion

#pragma region 기본 매개 변수
	// 함수를 선언 및 정의할 때 사용자가 미리 기본값을
	// 지정한 매개변수입니다.

	// OnDamage();
	// OnDamage(99);

	// Coordinate(10, 20);
	// Coordinate(5, 10, 15);
#pragma endregion

#pragma region 범위 지정 연산자
	// 여러 범위에서 사용되는 식별자를 구분하는데 사용되는 연산자입니다.

	// char character = 'A';
	// 
	// std::cout << "지역 변수 character 변수의 값 : " << character << std::endl;
	// 
	// // 범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가 선언되었을
	// // 때 가장 가까운 범위에 선언된 변수의 이름을 사용하는 범위 규칙이 
	// // 존재하기 때문에 전역 변수가 호출되지 않습니다.
	// 
	// std::cout << "전역 변수 character 변수의 값 : " << ::character << std::endl;

	// 범위 지정 연산자를 사용하게 되면 전역 변수의 범위를 지정하게 되므로 
	// 전역 변수에 접근할 수 있습니다.
#pragma endregion

}

