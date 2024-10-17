#include <iostream>

using namespace std;

class GameObject
{
private:
	static int count;
	const char* name;

public:
	GameObject()
	{
		name = "Cylinder";

		cout << "Create GameObject" << endl;
	}

	void Information() const
	{
		// name = "Box";

		cout << "name : " << name << endl;
		cout << "Count의 값 : " << count << endl;
	}

#pragma region 소멸자
	// 객체가 소멸될 때 자동으로 실행되는 클래스의
	// 멤버 함수입니다.

	~GameObject()
	{
		count++;

		cout << "Destroy GameObject" << endl;
	}

	// 소멸자는 객체가 메모리에서 해제될 때 단 한 번
	// 만 호출되며, 소멸자에는 매개 변수를 생성하여
	// 사용할 수 없습니다.
#pragma endregion
};

int GameObject::count = 0;

void OnDamage(int& stamina)
{
	stamina -= 10;
}

int main()
{
#pragma region 생성자
	// 클래스의 인스턴스가 생성되는 시점에서 자동으로
	// 호출되는 특수한 멤버 함수입니다.

	// GameObject gameObject;
	// 
	// GameObject * gameObject1 = new GameObject();
	// GameObject * gameObject2 = new GameObject();
	// GameObject * gameObject3 = new GameObject();
	// 
	// delete gameObject1;
	// delete gameObject2;	
	// delete gameObject3;
	// 
	// gameObject.Information();

	// 생성자의 경우 객체가 생성될 때 단 한 번만 호출
	// 되며, 생성자는 반환형이 존재하지 않기 때문에
	// 생성자가 호출되기 전에는 객체에 대한 메모리는
	// 할당되지 않습니다.

#pragma endregion

#pragma region 참조자
	// 할당된 하나의 메모리 공간에 다른 이름을
	// 붙여 사용하는 키워드입니다.

	// int health = 100;
	// 
	// int & reference = health;
	// 
	// reference = 99;
	// 
	// OnDamage(health);
	// 
	// cout << "health 변수의 값 : " << health << endl;
	// cout << "reference 변수의 값 : " << reference << endl;

#pragma endregion

	return 0;
}

