#include<bits/stdc++.h>
using namespace std;
signed main(void){
	int a[5];
	for(int i=0;i<5;i++)
		cin>>a[i];
	sort(a,a+5);
	cout<<a[4];
	for(int i=3;i>=0;i--)
		cout<<" "<<a[i];
	cout<<endl;
}