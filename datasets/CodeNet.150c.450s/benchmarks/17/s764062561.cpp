#include<iostream>
#include<algorithm>>
#include<functional>
using namespace std;
int main(){
	int a[5];
	for(int i=0;i<5;i++)cin>>a[i];
	sort(a,a+5,greater<int>());
	cout<<a[0];
	for(int i=1;i<5;i++)cout<<' '<<a[i];
	cout<<endl;
	return 0;
}