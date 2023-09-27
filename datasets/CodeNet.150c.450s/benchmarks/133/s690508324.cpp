#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define SP << " " 
#define LLi long long int

using namespace std;

int imax=2147483647;
long long int llimax=9223372036854775807;

//int型vectorを出力
void PV(vector<int> pvv) {
	rep(i, pvv.size()) cout << pvv[i] SP;
	cout << endl;
}

//LLi型vectorを出力
void PVL(vector<LLi> pvv) {
	rep(i, pvv.size()) cout << pvv[i] SP;
	cout << endl;
}

int main(){

	int d, ans=0;
	vector<int> c, t, ld;
	vector< vector<int> >s;

	cin>> d;

	c.resize(26);
	rep(i, 26) cin>> c[i];
	s.resize(d);
	rep(i, d){
		s[i].resize(26);
		rep(j, 26) cin>> s[i][j];
	}
	t.resize(d);
	rep(i, d){
		cin>> t[i];
		t[i]--;
	}
	ld.resize(26);

	rep(i, d){
		ans+=s[i][t[i]];
		ld[t[i]]=i+1;
		rep(j, 26) ans-=(i-ld[j]+1)*c[j];
		cout<< ans << endl;
	}
 
	return 0;
}