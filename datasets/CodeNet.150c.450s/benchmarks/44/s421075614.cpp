#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <complex>
#include <functional>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cctype>

using namespace std;

#define dump(n) cout<<"# "<<#n<<"="<<(n)<<endl
#define debug(n) cout<<__FILE__<<","<<__LINE__<<": #"<<#n<<"="<<(n)<<endl
#define repi(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,n) repi(i,0,n)
#define iter(c) __typeof((c).begin())
#define tr(c,i) for(iter(c) i=(c).begin();i!=(c).end();i++)
#define allof(c) (c).begin(),(c).end()
#define mp make_pair

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int,int> pii;

int main()
{
	for(int a[4],b[4];cin>>a[0];){
		repi(i,1,4)
			cin>>a[i];
		rep(i,4)
			cin>>b[i];
		
		vi c;
		rep(i,4)
			if(a[i]!=b[i]){
				c.push_back(a[i]);
				c.push_back(b[i]);
			}
		int hit=4-c.size()/2;
		
		sort(allof(c));
		c.erase(unique(allof(c)),c.end());
		int blow=8-hit*2-c.size();
		
		cout<<hit<<" "<<blow<<endl;
	}
	
	return 0;
}