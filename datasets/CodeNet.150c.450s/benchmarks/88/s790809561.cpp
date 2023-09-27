#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <valarray>
#include <vector>

#define EPS 1e-9
#define INF 1070000000LL
#define MOD 1000000007LL
#define fir first
#define foreach(it,X) for(auto it=(X).begin();it!=(X).end();it++)
#define ite iterator
#define mp make_pair
#define mt make_tuple
#define rep(i,n) rep2(i,0,n)
#define rep2(i,m,n) for(int i=m;i<(n);i++)
#define pb push_back
#define sec second
#define sz(x) ((int)(x).size())

using namespace std;

struct timer{
	time_t start;
	timer(){start=clock();}
	~timer(){cerr<<1.*(clock()-start)/CLOCKS_PER_SEC<<" secs"<<endl;}
};

typedef istringstream iss;
typedef long long ll;
typedef pair<ll,ll> pi;
typedef stringstream sst;
typedef vector<ll> vi;

int h,w;

bool larger(int a,int b,int c,int d){
	return a*a+b*b > c*c+d*d || a*a+b*b == c*c+d*d && a>c;
}

void main2(){
	int H=999,W=0;
	rep2(i,1,200)rep2(j,i+1,200){
		if(larger(i,j,h,w) && larger(H,W,i,j))H=i,W=j;
	}
	cout<<H<<" "<<W<<endl;
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	while(cin>>h>>w && h){
		main2();
	}
}