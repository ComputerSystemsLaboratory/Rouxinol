#include<iostream>
#include<algorithm>
using namespace std;
int a[8];
int main(){
	for(int i=0;i<8;i++)cin>>a[i];
	cout<<max(a[0]+a[1]+a[2]+a[3],a[4]+a[5]+a[6]+a[7])<<endl;
	return 0;
}