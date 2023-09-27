#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	cout<<a/3600<<":"<< (a-a/3600*3600)/60<<":"<<a-(a/3600*3600)-(((a-a/3600*3600)/60)*60)<<endl;
	return 0;
} 
