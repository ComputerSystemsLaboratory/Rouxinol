#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <cmath>
#include <complex>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0;i<int(n);++i)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define EPS 1e-8
#define F first
#define S second

static const double PI=6*asin(0.5);
typedef long long ll;
typedef complex<double> CP;
typedef pair<int,int> P;
static const int INF=1<<24;

int main(){
	string s;
	int n;
	while(cin>>n,n){
		int a[240010]={0};
		
		char tmp;
		rep(i,n){
			stringstream ss1,ss2;
			int t1=0,t2=0;
			cin>>s;
			//cout<<s<<endl;
			ss1<<s[0]<<s[1]<<s[3]<<s[4]<<s[6]<<s[7];
			ss1>>t1;
			cin>>s;
			ss2<<s[0]<<s[1]<<s[3]<<s[4]<<s[6]<<s[7];
			ss2>>t2;
			//cout<<t1<<" "<<t2<<endl;
			for(int i=t1;i<t2;i++){
				a[i]++;
			}
		}
		int res=0;
		rep(i,240001){
			res=max(res,a[i]);
		}
		cout<<res<<endl;
	}
	return 0;
}
		