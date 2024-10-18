#include <iostream>

using namespace std;

class Unit
{
private:
	int health = 0;
	int * count;

public:
	Unit()
	{
		count = new int;

		cout << "생성자" << endl;
	}

	Unit(Unit & clone)
	{
		// 얕은 복사는 객체가 메모리에서 해제될 때
		// 생성자의 실행 순서와 반대로 소멸자가 실행되기 
		// 때문에 복사한 객체가 먼저 해제되므로 원래 있던
		// 객체가 해제될 때 이미 해제된 메모리로 접근하게 되는 것 입니다.

	
#pragma region 깊은 복사
		// 객체를 복사할 때, 참조 값이 아닌 인스턴스 자체를 
		// 새로 복사하여 서로 다른 메모리를 생성하는 복사입니다.
		count = new int;

#pragma endregion


		health = clone.health;

		cout << "복사 생성자" << endl;
	}

	void SetData(int stamina)
	{
		health = stamina;
	}

	void GetData()
	{
		cout << "count : " << count << endl;
		cout << "health : " << health << endl;
	}

	~Unit()
	{
		delete count;
	}
};

int main()
{
#pragma region 복사 생성자
	// 같은 객체를 복사하여 생성시킬 때 호출되는
	// 생성자입니다.

	// Unit unit1;

	// Unit unit2(unit1);

	// 복사 생성자를 정의하지 않고, 객체를 복사하게 되면
	// 기본 복사 생성자가 호출되기 때문에 얕은 복사로
	// 객체가 복사됩니다.
#pragma endregion

#pragma region 얕은 복사
	// 객체를 복사할 때 주소 값을 복사하여 같은
	// 메모리 공간을 가리키게 하는 복사입니다.

	// Unit marine1;
	// 
	// Unit marine2 = marine1;
	// 
	// marine2.SetData(60);
	// 
	// marine1.GetData();
	// marine2.GetData();

	// 얕은 복사의 경우 같은 객체가 서로 같은 메모리
	// 공간을 참조하고 있기 때문에 하나의 객체로 값을
	// 변경하게 되면 서로 참조된 객체도 함께 영향을 받습니다.
#pragma endregion

	return 0;
}

