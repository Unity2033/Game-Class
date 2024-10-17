#include <iostream>

using namespace std;

namespace Korea
{
	float area;

	void Information()
	{
		cout << "면적 : " << area << endl;
	}
}

namespace Australia
{
	float area;

	void Information()
	{
		cout << "면적 : " << area << endl;
	}
}

using namespace Korea;

class Object
{
#pragma region 접근 지정자
	// 클래스 내부의 포함되어 있는 속성에 접근 범위를
	// 제한하는 지정자입니다.

	// public : 클래스 내부와 자기가 상속하고 클래스 그리고 클래스
	//		    외부에서 접근을 허용하는 접근 지정자입니다.

	// protected : 클래스 내부와 자기가 상속하고 있는 클래스에서만
	//             접근을 허용하는 접근 지정자입니다.

	// private : 클래스 내부에서만 접근을 허용하는 접근 지정자입니다.
#pragma endregion

public:
	int x;

	int X()
	{
		return x;
	}

protected:
	int y;
private:
	int z;
};

int main()
{
#pragma region 이름 공간
	// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역입니다.

	// area = 1000;
	// Information();

	// Australia::area = 9999;
	// Australia::Information();

	// 이름 공간은 같은 이름의 함수나 변수를 또 다른 공간에 선언하여
	// 중복되지 않도록 선언할 수 있습니다.

#pragma endregion

#pragma region 클래스
	// 사용자 정의 데이터 유형으로 속성과 함수가 포함되어 
	// 있으며, 클래스를 통해 객체를 생성하여 접근하고 사용
	// 할 수 있는 집합체입니다.

	// Object object1;
	// Object object2; 
	// Object object3;
	// 
	// object1.x = 5;
	// object2.x = 25;
	// object3.x = 10;
	// 
	// cout << "Object의 크기 : " << sizeof(Object) << endl;
	// 
	// cout << "object1.x : " << object1.X() << endl;
	// cout << "object2.x : " << object2.X() << endl;
	// cout << "object3.x : " << object3.X() << endl;

	// 클래스의 경우 클래스 내부에 있는 변수는 클래스의 
	// 메모리 영역에 포함되지만, 정적 변수와 함수의 메모리는 
	// 클래스 영역에 포함되지 않습니다.
#pragma endregion

	return 0;
}

