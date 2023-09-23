#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a, b;
	int temp;
	while (cin >> a >> b)
	{
		if (a < b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		int a_ = a, b_ = b;
		while (a_ % b_ != 0)
		{
			temp = a_ % b_;
			a_ = b_;
			b_ = temp;
		}
		cout << b_ << " " << b / b_ * a << endl;
	}

	return 0;
}