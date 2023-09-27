#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <bitset>
#include <climits>
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define RFOR(i,a,b) for (int i=(a)-1;i>=(b);i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
const int INF = 1e9;
const int MOD = 1e9 + 7;

using namespace std;

//[p,r)
int partition(vector<int>& A,int p,int r){
	int x = A[r-1];//partition
	int i = p-1;
	REP(j,r){
		if(A[j] <= x)	swap(A[j],A[++i]);
	}
	return i;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
	int n;cin>>n;
	vector<int> A(n);REP(i,n)cin>>A[i];
	int standard =  partition(A,0,n);
	REP(i,n){
		if(i)cout << ' ';
		if(standard == i)cout << '[';
		cout << A[i];
		if(standard == i)cout << ']';
	}
	cout << endl;
  return 0;
}