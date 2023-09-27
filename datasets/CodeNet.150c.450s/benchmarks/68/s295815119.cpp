#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define REP(i,n) for (int i=0;i<(n);i++)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
	int n;
	while(cin >> n,n){
	vector<int> a(n);
	REP(i,n)cin >> a[i];
	sort(a.begin(),a.end());
	int min_ = 1e9;
	REP(i,n - 1)min_ = min(min_,abs(a[i] - a[i + 1]));
	cout << min_ << endl;
	}
  return 0;
}