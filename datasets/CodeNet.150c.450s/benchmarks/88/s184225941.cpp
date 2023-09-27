#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <complex>
#include <map>
#include <climits>
using namespace std;

#define reep(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) reep((i),0,(n))
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define EPS 1e-8
#define F first
#define S second

static const double PI=6*asin(0.5);
typedef long long ll;
typedef complex<double> CP;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vint;
static const int INF=1<<24;

int main(){
	//49+16=65
	int h,w;
	while(cin>>h>>w,h||w){
		int x=150,y=150;
		int dia=h*h+w*w;
		reep(i,1,151){
			//if(i==0) continue;
			reep(j,i+1,151){
				if(i==h&&j==w) continue;
				int dia1=x*x+y*y;
				int dia2=i*i+j*j;
				if(dia2>=dia){
					//cout<<"   "<<i<<" "<<j<<endl;
					if(dia==dia2&&i<h) continue;
					if(dia1>dia2){
						x=i;y=j;
						//cout<<"x = "<<x<<" y = "<<y<<endl;
					}
					else if(dia1==dia2&&i<x){
						x=i;y=j;
						//cout<<"x = "<<x<<" y = "<<y<<endl;
					}
				}
			}
		}
		cout<<x<<" "<<y<<endl;
	}
	return 0;
}