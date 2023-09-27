#include <bits/stdc++.h>
#define rep(i,l,n) for(i=l;i<n;i++)
using namespace std;

int main(){
	int d,s,i,n;

	while(scanf("%d",&d)!=EOF){
		s=0;
		n=600/d;
		rep(i,1,n){
			s+=d*i*d*i*d;
		}
		cout<<s<<endl;
	}
}