#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define dbg(x) cout<< #x << ": " << x << "\n";
using namespace std;
#define inf 1e9+7
#define PI  3.14159265358979323846264338327950L
#define pii pair<ll,ll> 



const int mx=1e4+2;
int ans[mx];
int  main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0); 
	int n;
	cin>>n;
	for(int i=1; i<=sqrt(n); ++i){
		for(int j=1; j<=sqrt(n); ++j){
			for(int k=1; k<=sqrt(n); ++k){
				int p = i*i + j*j +k*k + i*j +j*k + i*k;
				if(p<mx) ans[p]+=1;
			}
		}
	}
	for(int i=0; i<n; ++i){
		cout<<ans[i+1]<<"\n";
	}
}
    

	


