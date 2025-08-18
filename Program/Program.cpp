#include <iostream>

using namespace std;

int main()
{
#pragma region 에라토스테네스의 체

	int j = 0;
	int n = 0;

	std::cin >> n;

	for (int i = 2; i <= n; i++)
	{
		for (j = 2; j < n; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}

		if (i == j)
		{
			cout << i << " ";
		}
	}

#pragma endregion


	return 0;
}
