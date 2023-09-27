#include<iostream>

using namespace std;

int main()
{
	int a = 0, b = 0;
	int length = 0, sheeld = 0;
	
	cin >> a >> b;
	
	length = (a + b) * 2;
	sheeld = a * b;
	
	cout << sheeld << " " << length << endl;
	
	return 0;
}