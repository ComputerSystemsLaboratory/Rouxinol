#include<bits/stdc++.h>

#define reps(i,j,k) for(int i=(j);i<(k);i++)
#define rep(i,j) reps(i,0,j)
#define pb push_back

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main(){
	int m, ni,na;
	while(cin >> m >> ni >> na, m){
		vi p(m);
		rep(i,m){
			cin >> p[i];
		}
		int ans = -1, gap = -1;
		reps(i, ni, na+1){
			int g = p[i-1] - p[i];
			if(gap <= g){
			  ans = i;
			  gap = g;
			}
		}
		cout << ans << endl;
	}
}