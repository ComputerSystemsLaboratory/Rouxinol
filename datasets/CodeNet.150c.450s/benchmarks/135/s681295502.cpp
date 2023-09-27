//c
#include <iostream>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <memory>
#include <functional>
#include <utility>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
 
#define REP(i,b,n) for(int i=b;i<n;i++)
#define REPR(i,b,n) for(int i=n-1;i>=b;i--)
#define CLR(mat) memset(mat, 0, sizeof(mat))
#define NCLR(mat) memset(mat, -1, sizeof(mat))
#define ALL(c) (c).begin(), (c).end()
#define RALL(c) (c).rbegin(), (c).rend()
#define EACH(i, c) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
#define EXIST(s, e) ((s).find(e) != (s).end())
#define BIT(n, b) ((n>>b) & 1)
#define PB push_back
#define MP make_pair
 
using namespace std;
 
static const double PI = acos(-1.0);
static const double EPS = 1e-9;
typedef long long ll;
typedef pair<int, int> pii;   
 
int n, m;
int h[3000], w[3000];

 
int main(){
	
	while(cin>>n>>m, (n||m)){
		
		vector<int> hsum, wsum;
		int res = 0;
		
		for(int i=0; i<n; ++i){
			cin>>h[i];
		}
		
		for(int i=0; i<m; ++i){
			cin>>w[i];
		}
		
		for(int i=0; i<n; ++i){
			
			int d = 0;
			
			for(int j=i; j<n; ++j){
				hsum.push_back(d += h[j]);
			}
		}
		
		sort(hsum.begin(), hsum.end());
		
		for(int i=0; i<m; ++i){
			
			int d = 0;
			
			for(int j=i; j<m; ++j){
				
				d += w[j];
				
				res += (int)(upper_bound(hsum.begin(), hsum.end(), d)
								- lower_bound(hsum.begin(), hsum.end(), d));
			}
		}
		
		cout << res << endl;
	}
	
	return 0;   
}