// compile in C++11. use -std=c++11.
#include <iostream>
#include <iomanip>
#include <vector>
#include <valarray>
#include <map>
#include <set>
#include <list>
#include <queue>
#include <stack>
#include <bitset>
#include <utility>
#include <numeric>
#include <algorithm>
#include <functional>
#include <complex>
#include <string>
#include <sstream>

#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cstring>

// these require C++11
#include <unordered_set>
#include <unordered_map>
#include <random>

using namespace std;

#define int long long

#define all(c) c.begin(), c.end()
#define repeat(i, n) for (int i = 0; i < static_cast<int>(n); i++)
#define debug(x) #x << "=" << (x)

#ifdef DEBUG
#define dump(x) std::cerr << debug(x) << " (L:" << __LINE__ << ")" << std::endl
#else
#define dump(x) 
#endif

typedef complex<double> point;

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &vec) {
    os << "[";
    for (const auto &v : vec) {
        os << v << ",";
    }
    os << "]";
    return os;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
	int n; cin>>n;
	int a[n];
	repeat(i,n){
		cin>>a[i];
	}
	unsigned long dp[110][25]={};
	dp[0][a[0]]=1;
	for(int i=1;i<n-1;i++){
		repeat(j,21){
			if(j+a[i]<=20){dp[i][j+a[i]]+=dp[i-1][j];}
			if(j-a[i]>=0) {dp[i][j-a[i]]+=dp[i-1][j];}
		}
	}
	cout<<dp[n-2][a[n-1]]<<endl;
    return 0;
}