#include<bits/stdc++.h>
#define fastio 	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define unmap  	unordered_map<int,int>
#define	unset	unordered_set<int>
#define maxpq  	priority_queue<int>
#define minpq  	priority_queue<int, vector<int>, greater<int>>
#define pb 		push_back		
#define ll 		long long
#define ull     unsigned ll
#define ff 		first
#define ss 		second//typedef second ss;
#define foton(i,n) for(int i=0;i<n;i++)
#define	faton(i,a,n)	for(int i=a;i<=n;i++)
#define mod 	1000000007
#define endl "\n"
using namespace std;
void solve(){
	int n;cin>>n;
    int ar[n];
    ll sum = 0;
    unmap mp;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sum += ar[i];
        mp[ar[i]]++;
    } 
    int q;cin>>q;
    while(q--){
        int a,b;cin>>a>>b;
        if(!mp[a]){
            cout<<sum<<endl;
            continue;
        }
        int x = mp[a];
        sum -= 1ll*x*a;
        sum += 1ll*x*b;
        mp[a] = 0;
        mp[b] += x;
        cout<<sum<<endl;
    }
}

int main(){
	fastio;
	solve();
	return 0;
}