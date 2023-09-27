#include<bits/stdc++.h>
#define ford(i,a,b) for(int i=(a);i>=b;i--)
#define rep1(i,a,b) for(int i=(a);(i)<=(b);(i)++)
#define rep(i,a,b) for(int i=(a);(i)<(b);(i)++)
#define ll long long
#define N 200005
#define pql priority_queue<ll>
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define rev(a,n) reverse(a,a+n)
using namespace std;
int n,k,a[N];
int main() {
	cin>>n>>k;
	rep1(i,1,n){
		cin>>a[i];
		if(i>k){
			if(a[i-k]<a[i]) cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
	return 0;
}
