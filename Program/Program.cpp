#include <iostream>

using namespace std;


// 1. 두 개의 자연수 x, y가 있을 때
//    x와 y를 나눈 나머지를 r이라고 합니다.

// 2. r이 0이라면, x와 y의 최대공약수가 y가 됩니다.

// 3. r이 0이 아니라면, x와 y의 최대 공약수는 y와 r의
//    최대 공약수와 같기 때문에 x에는 y 그리고 y에는
//    r을 대입한 후 1번으로 돌아가면 됩니다.


int main()
{
#pragma region 유클리드 호제법
	// 2개의 자연수 또는 정식의 최대 공약수를 구하는 방식으로
	// 두 수가 서로 상대방 수를 나누어서 원하는 수를 얻어내는 알고리즘입니다.

	int x = 109;
	int y = 72;

	int result = 0;

	for (int i = 1; i <= x && i <= y; i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			result = i;
		}
	}

	cout << "최대 공약수 : " << result << endl;

#pragma endregion

	return 0;
}
