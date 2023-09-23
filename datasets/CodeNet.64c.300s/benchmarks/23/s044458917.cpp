#include <iostream>
using namespace std;

int main()
{
	int a;  //tate
	int b;  //yoko
	cin >> a;
	cin >> b;
	
	int area, circuit;
	
	area = a * b;
	circuit = 2*a + 2*b;
	
	cout << area << " " << circuit << endl;
	
	return 0;
}