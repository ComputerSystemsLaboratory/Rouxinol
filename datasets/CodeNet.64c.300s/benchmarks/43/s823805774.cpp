#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int a[4],b[4];
	int s,t;
	for(int i=0;i<4;i++)cin>>a[i];
	for(int j=0;j<4;j++)cin>>b[j];
	s=a[0]+a[1]+a[2]+a[3];
	t=b[0]+b[1]+b[2]+b[3];
	if(s>t)cout<<s;
	else cout<<t<<endl;
}