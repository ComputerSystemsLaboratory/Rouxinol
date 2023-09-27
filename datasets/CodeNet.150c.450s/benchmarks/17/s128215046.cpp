#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a[5];
	for(int i=0;i<5;i++)cin>>a[i];
	sort(a,a+5);
	for(int i=4;i>=0;i--)
	{
		if(i!=4)cout<<" ";
		cout<<a[i];
	}
	cout<<endl;
	return 0;
}