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
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<n;i++)
#define F first
#define S second
int dx[]={1,-1,0,0},dy[]={0,0,1,-1};

int main(){
	int n;
	cin>>n;
	rep(i,n){
		double x[4],y[4];
		rep(j,4)cin>>x[j]>>y[j];
		if(x[0]==x[1]){
			cout<<(x[2]==x[3]?"YES":"NO")<<endl;
		}else{
			if(x[2]==x[3])cout<<"NO\n";
			else{
				cout<<((y[0]-y[1])/(x[0]-x[1])==(y[2]-y[3])/(x[2]-x[3])?"YES":"NO")<<endl;
			}
		}
	}
	return 0;
}