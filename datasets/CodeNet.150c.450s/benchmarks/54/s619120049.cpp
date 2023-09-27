#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main()
{
	string a,b;	cin >> a; 
	int d = 0;
	while(cin>>b,b!= "END_OF_TEXT"){
		int l = b.size();
		for (int i = 0; i < l; i++)
		{
			b[i] = tolower(b[i]);
		}
		if (a == b) { d++; }
	}cout << d << endl;
}