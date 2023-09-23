#include<string>
#include<iostream>

using namespace std;

int main()
{
	int x;
	cin >> x ;
	int a = x%3600;
	int b = a%60;
	cout << x/3600 << ":"<< a/60 <<":"<< b << endl;
	return 0;
	
	}