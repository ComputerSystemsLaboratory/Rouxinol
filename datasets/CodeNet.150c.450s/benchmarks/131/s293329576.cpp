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
typedef pair<ll,int> P;
static const int INF=1<<24;

int main(){
	string s,st[10];
	st[1]="0";
	st[2]="00";
	st[3]="000";
	st[4]="0000";
	st[5]="00000";
	int l;
	while(cin>>s>>l,l){
		vector<P> a;
		//cout<<s.size()<<" "<<l<<endl;
		P tmp;
		stringstream ss1;
		ss1<<s;
		ss1>>tmp.F;
		tmp.S=0;
		a.PB(tmp);
		if(l-s.size()>0){
			s+=st[l-s.size()];
		}
		//cout<<s<<endl;
		
		rep(i,30){
			bool f=false;
			stringstream s1,s2,s3;
			int t1,t2;
			sort(ALL(s));
			s1<<s;
			s1>>t1;
			sort(ALL(s),greater<char>());
			s2<<s;
			s2>>t2;
			rep(j,a.size()){
				if(a[j].F==t2-t1){
					f=true;
					cout<<a[j].S<<" "<<t2-t1<<" "<<i+1-a[j].S<<endl;
				}
			}
			if(f) break;
			P tmp;
			tmp.F=t2-t1;
			tmp.S=i+1;
			a.PB(tmp);
			s3<<t2-t1;
			s3>>s;
			if(l-s.size()>0){
				s+=st[l-s.size()];
			}
			//cout<<s<<" "<<t2<<" "<<t1<<endl;
		}
	}
	return 0;
}