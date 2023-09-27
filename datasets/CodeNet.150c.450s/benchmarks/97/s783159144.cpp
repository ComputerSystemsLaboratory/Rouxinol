#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<numeric>

#define INF (1<<28)
#define rep(i,j) for(int i=0;i<(j);i++)
#define reps(i,j,k) for(int i=(j);i<=(k);i++)
#define fs first
#define sc second
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main(){
	int n;
	while(cin>>n,n){
		vector<pii> v(n);
		int r=0,l=0,t=0,b=0;
		v[0] = pii(0,0);
		rep(i,n-1){
			int m,d,x,y;
			cin >> m >> d;
			x = v[m].fs + dx[d];
			y = v[m].sc + dy[d];
			v[i+1] = pii(x,y);
			r = max(r, x);
			l = min(l, x);
			t = min(t, y);
			b = max(b, y);
		}
		cout << r-l+1 << " " << b-t+1 << endl;
	}
	return 0;
}