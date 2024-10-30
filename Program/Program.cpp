#include <iostream>

using namespace std;

template<typename T>
class List
{
private:
	int size;

	T * pointer;

public :
	List(int size)
	{
		this->size = size;

		pointer = new T[this->size];
	}

	void Add(T data)
	{

	}

	~List()
	{
		delete pointer;
	}
};

int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고, 하나의 값이 여러 다른 데이터
	// 타입들을 가질 수 있는 기술에 중점을 두어 재사용을 높일 수
	// 있는 기능입니다.

	List<int> list(5);

#pragma endregion


	return 0;
}

