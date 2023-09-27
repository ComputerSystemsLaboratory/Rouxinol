#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define all(x) (x).begin(),(x).end()
const int INF=1e9+5;
const int N=2e5+5;
const int mod=1e9+7;
vector<int> v[500005];
map<vector<int>,ll> maps;


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int& x:a) cin>>x;
	for(int i=k;i<n;++i){
		//~ cout<<a[i]<<" ? "<<endl;
		cout<<(a[i-k]<a[i]?"Yes":"No")<<endl;
	}
	return 0;
}
