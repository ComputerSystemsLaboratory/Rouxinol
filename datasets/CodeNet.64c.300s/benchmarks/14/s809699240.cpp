#include <iostream>

using namespace std;

class Myclass
{
	long a, b;

public:
	void Get_Num();
	void Compare();
};

void Myclass::Get_Num()
{
	cin >> a;
	cin >> b;

	Compare();
}

void Myclass::Compare()
{
	if( ( -1000 <= a && a <= 1000 ) && ( -1000  <= b && b <= 1000 ) )
	{
		if( a < b )
		{
			cout << "a < b" << endl;
		}else
		if( a > b )
		{
			cout << "a > b" << endl;
		}else
		if( a == b )
		{
			cout << "a == b" << endl;
		}
	}
}

int main()
{
	Myclass mc;
	
	mc.Get_Num();

	return 0;
}