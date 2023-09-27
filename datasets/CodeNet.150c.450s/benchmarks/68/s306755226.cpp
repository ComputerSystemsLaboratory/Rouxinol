#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,a[50000],m;
	while(cin>>n,n){
		m=1000000;
		for(i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
	    for(i=1;i<n;i++)m=min(m,a[i]-a[i-1]);
	    cout<<m<<endl;
	}
}