#include<bits/stdc++.h>
#define int long long
using namespace std;
 
signed main(){
	vector<int>a(45);
	a[0]=a[1]=1;
	for(int b=2;b<45;b++)a[b]=a[b-1]+a[b-2];
	int c;
	cin>>c;
	cout<<a[c]<<endl;
}