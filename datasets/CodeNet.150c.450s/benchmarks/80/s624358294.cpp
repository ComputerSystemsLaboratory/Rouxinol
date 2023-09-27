#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
	int a[5]={},b[5]={},ans;
	for(int w=0;w<4;w++){
		cin>>a[w];
		a[4]=a[4]+a[w];
	}
	for(int w=0;w<4;w++){
		cin>>b[w];
		b[4]=b[4]+b[w];
	}
	if(a[4]>=b[4]) cout<<a[4]<<endl;
	else cout<<b[4]<<endl;
}