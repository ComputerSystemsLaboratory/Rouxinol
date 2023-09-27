#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>
#define ALL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define F(i,j,k) fill(i[0],i[0]+j*j,k)
#define P(p) cout<<(p)<<endl;
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define INF 1<<25
#define pb push_back
using namespace std; 
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int,int> pii;
typedef pair<long,long> pll;
typedef long long ll;



int main(){
	int n,m;
	cin >> n >> m;
	int C[m];
	int T[n+1];
	for(int i = 0;i < m;i++){
		cin >> C[i];
	}
	for(int i = 1;i <= n;i++){
		T[i] = INF;
	}
	T[0] = 0;
	for(int i = 0;i <= n;i++){
		for(int j = 0;j < m;j++){
			if(i - C[j] >= 0){
				T[i] = min(T[i-C[j]] + 1,T[i]);
			}
		}
	}
	P(T[n]);
	return 0;
}