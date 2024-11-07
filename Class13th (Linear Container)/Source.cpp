#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <deque>

using namespace std;

int main()
{
#pragma region Vector 컨테이너
	// std::vector<int> vector;
	// 
	// vector.reserve(6);
	// 
	// vector.push_back(10); // [10]
	// vector.push_back(20); // [10][20]
	// vector.push_back(30); // [10][20][30]
	// vector.push_back(40); // [10][20][30][40]
	// vector.push_back(50); // [10][20][30][40][50]
	// 
	// vector.pop_back(); // [10][20][30][40]
	// 
	// vector.push_back(50); // [10][20][30][40][50]
	// vector.push_back(60); // [10][20][30][40][50][60]
	// vector.push_back(70); // [10][20][30][40][50][60][70]
	// 
	// cout << "Capacity : " << vector.capacity() << endl;
	// cout << "size : " << vector.size() << endl;
	// 
	// for (int i = 0; i < vector.size(); i++)
	// {
	// 	cout << vector[i] << endl;
	// }
#pragma endregion

#pragma region List 컨테이너

	// std::list<int> list;
	// 
	// list.push_back(10); // [10]
	// list.push_back(20); // [10][20]
	// list.push_front(0); // [0][10][20]
	// 
	// list.pop_front(); // [10][20]
	// 
	// cout << "List의 크기 : " << list.size() << endl;
	// 
	// cout << list.front() << endl;
	// cout << list.back() << endl;

#pragma endregion

#pragma region String 컨테이너

	//	string name = "Road";
	//	
	//	name = name + "FC";
	//	
	//	cout << "name 변수의 값 : " << name << endl;
	//	cout << "name Capacity 값 : " << name.capacity() << endl;
	//	
	//	name.append(" Go for it");
	//	
	//	cout << "name 변수의 Length : " << name.length() << endl;
	//	cout << "name 변수의 값 : " << name << endl;
	//	
	//	for (int i = 0; i < name.size(); i++)
	//	{
	//		if (i != 0 && i % 5 == 0)
	//		{
	//			name.insert(i, "X");
	//		}
	//	}
	//	
	//	cout << "name 변수의 값 : " << name << endl;
	//	
	//	cout << name.compare("for") << endl;

#pragma endregion

#pragma region Deque 컨테이너

	//	std::deque<int> deque;
	//	
	//	deque.push_back(15);
	//	deque.push_back(20);
	//	deque.push_back(1);
	//	
	//	deque.push_front(10);
	//	deque.push_front(5);
	//	deque.push_front(50);
	//	
	//	for (int i = 0; i < deque.size(); i++)
	//	{
	//		cout << deque[i] << endl;
	//	}

#pragma endregion

	return 0;
}

