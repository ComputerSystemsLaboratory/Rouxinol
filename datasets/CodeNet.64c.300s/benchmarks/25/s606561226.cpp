#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;

int main(){
	int a[4],b[4];
	while(cin>>a[0]){
		int hit=0,blow=0;
		rep(i,1,4) cin>>a[i];
		rep(i,0,4) cin>>b[i];
		rep(i,0,4){
			rep(j,0,4){
				if(a[i]==b[j]){
					if(i==j) hit++;
					else blow++;
				}
			}
		}
		cout<<hit<<" "<<blow<<endl;
	}
}