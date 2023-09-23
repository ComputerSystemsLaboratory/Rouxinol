#include <bits/stdc++.h>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
	int a[30],t;
	r(i,30)a[i]=0;
	r(i,28){
		cin>>t;
		a[t-1]++;
	}
	r(i,30)if(!a[i])cout<<i+1<<endl;
}