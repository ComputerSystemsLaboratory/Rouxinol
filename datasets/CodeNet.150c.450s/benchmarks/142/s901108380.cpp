#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 1e9;

int n, k;

int main(){
	cin>>n>>k;
	vector<int> vec(n, 0);
	for(int i = 0; i < n; ++i)cin>>vec[i];
	long long t = 1;
	for(int i = 0; i < k; ++i)t += vec[i];
	for(int i = k; i < n; ++i){
		long long q = t;
		t -=  vec[i - k];
		t += vec[i];
		long long r = t;
		if(r > q)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
