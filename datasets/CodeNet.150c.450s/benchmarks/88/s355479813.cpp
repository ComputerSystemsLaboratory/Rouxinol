#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>
#include <queue>
#include <cctype>
#include <complex>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <cassert>
#include <iomanip>

using namespace std;

#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
typedef long long ll;
typedef complex<int> P;
typedef pair<int, int> pii;
typedef tuple<int, int, int> tii;
const double EPS = 1e-10;
const double PI = acos(-1.0);



const int n = 151;
vector<vector<int>> a(n, vector<int>(n));

void init(){
	for(int i=1;i<n;++i) for(int j=i+1;j<n;++j){
		a[i][j] = i * i + j * j;
	}
}

bool solve(){
	int h, w;
	cin>> h>> w;
	if(!h && !w) return false;

	int x = h * h + w * w;
	pii ans(n, n);
	for(int i=1;i<n;++i){
		for(int j=i+1;j<n;++j){
			int y = i*i + j*j;
			if((i <= h && y == x) || y < x) continue;
			if(y < ans.first * ans.first + ans.second * ans.second){
				int j = (int)sqrt(y - i * i);
				ans = pii(i, j);
			}
		}
	}
	cout<< ans.first<< " "<< ans.second<< endl;
	return true;
}

int main(){
	cout.setf(ios::fixed); cout.precision(10);
	init();
	while(solve());
	return 0;
}