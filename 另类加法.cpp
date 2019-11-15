#include <iostream>
using namespace std;

class UnusualAdd {
public:
	int addAB(int A, int B)
	{
		if (B == 0)
		{
			return A;
		}
		int tmp = A ^ B;
		int cur = (A & B) << 1;
		return addAB(tmp, cur);
	}
};



int main1()
{

	return 0;
}