#include<iostream>
using namespace std;

int main()
{
	int h=0,m=0,s=0;
	cin >>s;
	h=s/3600;
	m=(s%3600)/60;
	s=(s%3600)%60; 	
	cout << h << ':' << m << ':' << s << '\n';

	return 0;
}