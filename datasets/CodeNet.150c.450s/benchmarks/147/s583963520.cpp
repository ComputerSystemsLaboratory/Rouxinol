#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define endl "\n"
#define pii pair<int,int> 
#define ff first
#define ss second
#define mii map<int,int>
#define si set<int>
#define sti stack<int>
#define qi queue<int>
#define vi vector<int>
#define pq priority_queue<int>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int M=1e9+7;

void solve(){
	int n;
	cin>>n;
	int ans[10005]={0};
	for(int i=1;i<=100;i++){
		for(int j=1;j<=100;j++){
			for(int k=1;k<=100;k++){
				int x=i*i+k*k+j*j+i*k+i*j+j*k;
				if(x<=10000) ans[x]++;
			}
		}
	}
	for(int i=1;i<=n;i++) cout<<ans[i]<<endl;
}

int32_t main(){
	IOS;
	int t=1;
	//cin>>t;
	while(t--){
		solve();	
	}
}