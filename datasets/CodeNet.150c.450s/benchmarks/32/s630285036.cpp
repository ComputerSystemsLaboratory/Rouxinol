#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	while(1){
		int m,nmin,nmax; cin >> m >> nmin >> nmax; if(m==0) return 0;
		int a[205];
		for(int i=1;i<=m;i++) cin >>a[i];
		int X = -1,ans =-1;
		for(int i=nmin;i<=nmax;i++){
			if(X <= a[i]-a[i+1]){
				X=a[i]-a[i+1]; ans=i;
			}
		}
		cout<<ans<<endl;
	}
}