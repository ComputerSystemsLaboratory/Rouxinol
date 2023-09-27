#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);++i)
#define dbg(x) cout << #x"="<< (x) << endl
#define fi first
#define se second

vector<int> change(vector<int> x,int k,int l){
	vector<int> m=x;
	x[k] = m[l];
	x[l] = m[k];
	return x;
}

int main(){
	int w,n;
	cin >> w;
	cin >> n;
	vector<int> ans(w);
	rep(i,w){
		ans[i]=i+1;
	}
	vector<int> m = ans;
	pair<int,int> a;
	string b;
	rep(i,n){
		cin >> b;
		sscanf(b.c_str(),"%d,%d",&a.fi,&a.se);
		m=ans;
		ans[a.fi-1] = m[a.se-1];
		ans[a.se-1] = m[a.fi-1];
	}
	rep(i,w){
		cout << ans[i] << endl;
	}
	
}