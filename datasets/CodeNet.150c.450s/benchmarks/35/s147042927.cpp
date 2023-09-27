#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
using namespace std;

int main(){
	int n;
	while(1){
		cin>>n;
		if(n==0) break;
		vector<int> a(n);
		rep(i,0,n) cin>>a[i];
		int MAX=a[0];
		rep(i,0,n){
			int sum=0;
			rep(j,i,n){
				sum+=a[j];
				MAX=max(MAX,sum);
			}
		}
		o(MAX);
	}
}