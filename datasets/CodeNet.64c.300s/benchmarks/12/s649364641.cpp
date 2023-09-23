#include<iostream>
using namespace std;

void Draw(int);

int main()
{
	int x;
	cin >> x;
	Draw(x);
	return 0;
}

void Draw(int a){
	cout << a*a*a << endl;
}