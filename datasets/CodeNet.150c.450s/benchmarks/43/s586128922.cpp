#include <iostream>
using namespace std;

int main()
{
	int n,a,b,A,B;
	while(cin >> n, n)
	{
		A=B=0;
		while(n--)
		{
			cin >> a >> b;
			if(a< b) {B+=a+b;}
			if(a> b) {A+=a+b;}
			if(a==b) {A+=a;B+=b;}
		}
		cout << A << " " << B << endl;
	}
}