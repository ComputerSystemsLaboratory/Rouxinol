#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(i=a;i<b;i++)
#define rloop(i,a,b) for(i=a;i>=b;i--)
#define vi vector<int>
#define vl vector<ll>
#define vii vector< vector<int> >
#define vll vector< vector<ll> >
#define vs vector<string>
const int inf=1000000001;
const ll INF=1e16;
#define MOD 1000000007
#define mod 1000000009
#define pi 3.14159265358979323846



int main(){
	int n,i,j,k,u,v;
	cin>>n;
	vii a(n,vi(n,0));
	loop(i,0,n){
		cin>>u>>k;
		loop(j,0,k){
			cin>>v;
			a[u-1][v-1]=1;
		}
	}
	loop(i,0,n){
		loop(j,0,n){
			cout<<a[i][j];
			if(j!=n-1){
				cout<<" ";
			}else{
				cout<<endl;
			}
		}
	}
}