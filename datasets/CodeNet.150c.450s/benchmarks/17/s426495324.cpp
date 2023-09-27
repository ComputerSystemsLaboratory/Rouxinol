#include<numeric>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int a[5];
	for(int i=0;i<5;i++)	cin>>a[i];
	sort(a,a+5,greater<int>());
	for(int i=0;i<5;i++)	cout<<(i?" ":"")<<a[i];
	cout<<endl;
	return 0;
}