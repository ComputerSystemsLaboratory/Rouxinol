#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define ff first
#define ss second
#define pi pair<ll,ll>
#define maxn 1000002
#define mod 1000000007

//vector<ll>adj[maxn];
//ll vis[maxn];
//ll cc[maxn];

//ll curr_cc;

ll arr[1000001];

int main(){
	
	
	for(int i=1;i<110;i++){
		for(int j=1;j<110;j++){
			for(int k=1;k<110;k++){
				ll res = i*i + j*j + k*k +i*j +j*k  +k*i;
				
				arr[res]++;
			}
		}
	}
	ll n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cout<<arr[i]<<"\n";
	}
}
	
	
	
	

