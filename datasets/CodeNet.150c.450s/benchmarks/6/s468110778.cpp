#include <iostream>

using namespace std;

class Myclass
{
	int a, b, c;

public:
	void Get_Num();
	void Compare();
};

void Myclass::Get_Num()
{
	cin >> a;
	cin >> b;
	cin >> c;

	Compare();
}

void Myclass::Compare()
{
	if( ( 0 <= a && a <= 100 ) && 
		( 0 <= b && b <= 100 ) &&
		( 0 <= c && c <= 100 ) )
	{
		if( ( a < b ) && ( b < c ) && ( a < c ) ) 
		{
			cout << "Yes" << endl;
		}else
		{
			cout << "No" << endl;
		}
	}
}

int main()
{
	Myclass mc;
	
	mc.Get_Num();

	return 0;
}