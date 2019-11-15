#include <iostream>
using namespace std;


int Rode(int m, int n)
{
	int tmp = 0;
	if (n == 1)
	{
		return m + 1;
	}
	for (int i = 0; i < m + 1; i++)
	{
		tmp += Rode(i, n - 1);
	}
	return tmp;
}

int main()
{
	int n, m;
	cin >> m >> n;
	int tmp = Rode(m, n);
	cout << tmp;
	return 0;
}