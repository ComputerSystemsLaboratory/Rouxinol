#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int a[5];
	for(int i=0;i<5;i++)cin>>a[i];
	sort(a,a+5);
	for(int i=4;i>=0;i--)(i==0)?cout<<a[i]<<endl:cout<<a[i]<<" ";
	return 0;
}