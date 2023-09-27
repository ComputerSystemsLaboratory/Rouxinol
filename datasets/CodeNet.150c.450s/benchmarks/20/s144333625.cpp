#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int x;
	cin>>x;
	cout<<x/(60*60)<<":"<<x%3600/60<<":"<<x%60<<endl;
	return 0;
}
