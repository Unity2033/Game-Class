#include <iostream>
#include <thread>

using namespace std;

void OnEnter()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Input..." << endl;
	}
}

void Renderer()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Render..." << endl;
	}
}

int main()
{
#pragma region 스레드
	// 프로세스 내에서 실행되는 하나의 작업 단위입니다.

	// thread thread1(OnEnter);
	// thread thread2(Renderer);
	// 
	// thread1.join();
	// thread2.join();
#pragma endregion

	return 0;
}

