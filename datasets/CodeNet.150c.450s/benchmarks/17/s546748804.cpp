#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
using namespace std;
static const double EPS = 1e-5;
typedef long long ll;
#define FOR(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int x[5];
	cin>>x[0]>>x[1]>>x[2]>>x[3]>>x[4];
	sort(x,x+5,greater<int>());
	cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<" "<<x[3]<<" "<<x[4]<<endl;
	return 0;
}