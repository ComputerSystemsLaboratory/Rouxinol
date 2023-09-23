#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c;
		if (a > b&&a > c) { d= a, a = c, c = d; }
		else if (b > c&&b > a) { d =b , b = c, c = d; }
    else if(c>a&&c>b){}
    if (a > b) { d =a , a = b, b= d; }
	cout << a << " " << b << " " << c<<endl;

	return 0;
}