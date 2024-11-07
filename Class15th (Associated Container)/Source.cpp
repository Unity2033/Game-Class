#include <iostream>
#include <list>
#include <map>			 
#include <set>

using namespace std;

int main()
{
#pragma region 연관 컨테이너
	// 컨테이너 내의 자료들이 규칙에 따라 정렬되어 있는 컨테이너입니다.

#pragma region 반복자
	// 컨테이너 내의 원소를 순회하기 위해 사용되는 포인터입니다.

	//	std::list<int> list;
	//	
	//	std::list<int>::iterator listIterator;
	//	
	//	list.push_back(10);
	//	list.push_back(20);
	//	list.push_back(30);
	//	
	//	listIterator = list.begin();
	//	
	//	list.insert(listIterator, 15);
	//	
	//	for (std::list<int>::iterator iterator = list.begin(); iterator != list.end(); iterator++)
	//	{
	//		cout << *iterator << endl;
	//	}
#pragma endregion

#pragma region Map

	//	std::map<string, int> map;
	//	
	//	map.insert({ "Sword", 1000 });
	//	map.insert({ "Armor", 1500 });
	//	
	//	if (map.find("Shose") != map.end())
	//	{
	//		cout << "Find" << endl;
	//	}
	//	else
	//	{
	//		cout << "Not Key Found" << endl;
	//	}
	//	
	//	map.erase("Sword");
	//	
	//	for (std::map<string, int>::iterator iterator = map.begin(); iterator != map.end(); iterator++)
	//	{
	//		cout << iterator->first << endl;
	//		cout << iterator->second << endl;
	//	}

#pragma endregion

#pragma region Set
	//	std::set<int> set;
	//	
	//	set.insert(10);
	//	set.insert(20);
	//	set.insert(30);
	//	set.insert(40);
	//	set.insert(50);
	//	set.insert(60);
	//	
	//	if (set.find(1) != set.end())
	//	{
	//		cout << "Find" << endl;
	//	}
	//	else
	//	{
	//		cout << "Not Key Found" << endl;
	//	}
	//	
	//	set.erase(40);
	//	
	//	for (std::set<int>::iterator iterator = set.begin(); iterator != set.end(); iterator++)
	//	{
	//		cout << *iterator << endl;
	//	}
#pragma endregion

#pragma endregion

	return 0;
}

