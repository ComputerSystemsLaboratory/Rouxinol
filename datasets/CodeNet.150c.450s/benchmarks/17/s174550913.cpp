#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;

int main(){
	int data[10]={};
	rep(i,0,5) cin>>data[i];
	sort(data,data+5);
	reverse(data,data+5);
	rep(i,0,4) cout<<data[i]<<" ";
	cout<<data[4]<<endl;
}