#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
 
using namespace std;
 
#define LOG(...) printf(__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
int main() {
	int n,m;
	ll list[100][21] ={{0}};
	cin >> n >> m;
	list[0][m]=1;
	REP(i, n-2) {
		cin >> m;
		REP(j, 21){
			if(list[i][j]){
				if(j-m>=0)
					list[i+1][j-m]+=list[i][j];
				if(j+m<21)
					list[i+1][j+m]+=list[i][j];
			}
		}
	}
	cin >> m;

	cout << list[n-2][m] << endl;
}