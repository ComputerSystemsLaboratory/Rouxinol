#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const int SIZE = 1000;
	int a[SIZE] ={};
	int b[SIZE] ={};
	int c[SIZE] ={};
	int num;
	cin >> num;
	for(int i = 0; i < num; i++)
		{
			cin >> a[i] >>b[i]>>c[i];
		}
	for(int i = 0; i < num; i++)
	{
		if(pow(a[i],2)==pow(b[i],2) + pow(c[i],2))
			cout << "YES"<< endl;
		else if(pow(b[i],2)==pow(c[i],2) + pow(a[i],2))
			cout << "YES"<< endl;
		else if(pow(c[i],2)==pow(a[i],2) + pow(b[i],2))
			cout << "YES"<< endl;
		else{cout << "NO" <<endl;}
	}
}