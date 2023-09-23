#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <functional>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <deque>
#include <ctime>

using namespace std;

#define rep(i,n) REP(i,0,n)
#define REP(i,s,e) for(int i=(s); i<(int)(e); i++)
#define pb push_back
#define mp make_pair
#define all(r) (r).begin(),(r).end()
#define rall(r) (r).rbegin(),(r).rend()
#define fi first
#define se second
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int INF = 1e9;
const ll LINF = 1e18;
const ll MOD = 1e9 + 7;
double EPS = 1e-8;
const double PI = acos(-1);

int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

int main(){


	int i,j,r,c,n[110][110];

	cin >> r >> c;

	for(i=0; i<r; i++){
		for(j=0; j<c; j++)
			cin>>n[i][j];
	}
		for(i=0; i<r; i++)
		for(j=0; j<c; j++)
			n[i][c] += n[i][j];

	for(j=0; j<c+1; j++)
		for(i=0; i<r; i++)
			n[r][j] += n[i][j];

	for(i=0; i<r+1; i++){
		for(j=0; j<c+1; j++){
			if(j==c) cout << n[i][j] << endl;
			else	 cout << n[i][j] << " ";	
		}
		
	}
  
		
	return 0;			



}