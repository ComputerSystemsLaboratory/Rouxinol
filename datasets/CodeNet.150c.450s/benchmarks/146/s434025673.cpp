#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cassert>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <sstream>
#include <utility>
#include <cstdlib>
#include <cctype>
#include <climits>
#include <fstream>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<pair<int, int> > vpii;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) for(int i=0;i<(n);++i)
#define foreach(itr,c) for(__typeof(c.begin()) itr=c.begin(); itr!=c.end(); itr++)
#define dbg(x) cout << #x"="<< (x) << endl
#define mp(a,b) make_pair((a),(b))
#define pb(a) push_back(a) 
#define in(x) cin >> x;
#define all(x) (x).begin(), (x).end()
#define INF 2147483600
#define fi first
#define se second
using namespace std;
const double eps = 1e-11;

int main(){
	int N;
	vd a(8);
	cin >> N;
	rep(i,N){
		rep(i,8){
			cin>>a[i];
		}
		if(abs((a[1]-a[3])*(a[4]-a[6])-(a[5]-a[7])*(a[0]-a[2]))< eps){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

}