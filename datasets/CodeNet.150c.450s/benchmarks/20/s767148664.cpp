#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{	
	int S,h,m,s;
	cin >> S;
	h=S/3600;
	S = S - (S / 3600)*3600;
	m = S / 60;
	S = S - (S / 60) * 60;
	s=S;
	cout << h << ":" << m << ":" <<s  <<endl;
	return 0;
}