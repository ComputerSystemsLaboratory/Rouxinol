//msol2020_c.cpp
//Sun Aug  2 20:38:42 2020

#include <iostream>
#include <string>
#include <queue>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#define INTINF 2147483647
#define LLINF 9223372036854775807
#define MOD 1000000007
#define rep(i,n) for (int i=0;i<(n);++i)

using namespace std;
using ll=long long;
typedef pair<int,int> P;

int main(){
	int n,k;
	cin >> n >> k;

	int a[n];
	rep(i,n) cin >> a[i];

	for (int i=k;i<n;i++){
		if (a[i-k]<a[i]){
			cout << "Yes" << endl;
		}else {
			cout << "No" << endl;
		}
	}

}