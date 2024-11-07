#include <iostream>
#include <stack>	  
#include <queue>

using namespace std;

int main()
{
#pragma region 컨테이너 어댑터
	// 기존의 컨테이너의 인터페이스를 제한하여 만든 기능이
	// 제한되거나 변형되어 있는 컨테이너입니다.

#pragma region Stack

	//	std::stack<int> stack;
	//	
	//	stack.push(10);	// [10]
	//	stack.push(20);	// [20] [10]
	//	stack.push(30);	// [30] [20] [10]
	//	stack.push(40);	// [40] [30] [20] [10]
	//	
	//	stack.pop();    // [30] [20] [10]
	//	
	//	cout << "Stack의 top의 값 : " << stack.top() << endl;
	//	cout << "Stack의 size의 값 : " << stack.size() << endl;
	//	cout << "Stack의 empty의 값 : " << stack.empty() << endl;
	//	
	//	while (stack.empty() == false)
	//	{
	//		cout << stack.top() << endl;
	//	
	//		stack.pop();
	//	}

#pragma endregion

#pragma region Queue

	//	std::queue<int> queue;
	//	
	//	queue.push(10);
	//	queue.push(20);
	//	queue.push(30);
	//	
	//	while (queue.empty() == false)
	//	{
	//		cout << queue.front() << endl;
	//	
	//		queue.pop();
	//	}

#pragma endregion

#pragma endregion

	return 0;
}

