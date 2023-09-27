#include<iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;
	int buf = 0;
	
	cin >> a >> b >> c;
	
	do{
		if(a > b){
			buf = a;
			a = b;
			b = buf;
		}
		if(b > c){
			buf = b;
			b = c;
			c = buf;
		}
	}while(!(a <= b && b <= c));
	
	cout << a << " " << b << " " << c << endl;
	
	return 0;
}