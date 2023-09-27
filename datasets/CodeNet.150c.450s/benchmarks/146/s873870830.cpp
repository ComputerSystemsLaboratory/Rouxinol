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
#define EPS 1e-10
#define F first
#define S second

static const double PI=6*asin(0.5);
typedef long long ll;
typedef complex<double> CP;
typedef pair<double,double> P;
static const int INF=1<<24;

int main(){
	int n;
    double x[4],y[4];
    cin>>n;
    for(;n--;){
        for(int i=0;i<4;i++){
            cin>>x[i];
            cin>>y[i];
        }
        if(abs((x[0]-x[1])*(y[2]-y[3])-(x[2]-x[3])*(y[0]-y[1]))<=EPS){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
	