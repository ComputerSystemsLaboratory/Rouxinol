#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include<cstring>
#include<queue>
#include<cmath>
#include<functional>
#include<numeric>
//#include<>
using namespace std;

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define REPS(i, n) for(int i=1;i<=(int)(n);i++)
#define RREP(i, n) for(int i=(int)n-1;i>=0;i--)
#define RREPS(i, n) for(int i=(int)n;i>0;i--)
#define ALL(a) a.begin(), a.end()
#define RALL(a) a.rbegin(), a.rend()
#define pb push_back
#define eb emplace_back

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n, m;

int main(){
	ios::sync_with_stdio(false);
	while(cin >> n){
		if(!n)break;
		int m,p;
		cin>>m>>p;
		vector<int> a(n);
		REP(i,n)
			cin>>a[i];
		ll sum=accumulate(ALL(a),0ll);
		cout<<(a[m-1]?sum*(100-p)/a[m-1]:0)<<endl;
	}
	return 0;
}