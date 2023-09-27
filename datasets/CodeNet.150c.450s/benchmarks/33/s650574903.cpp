#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <cstdio>

using namespace std;

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)


#define all all(v) v.begin(),v.end()
#define INF i<<30
#define mp make_pair
#define pb push_back

#define fi first
#define se second

#define each(it,c) for(auto it=(c).begin();it!=(c).end();it++)

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef vector<pair<int, int> > vp;

typedef long long ll;

#define EPS (1e-10)

int main(){
	/*
	int x,y,s;
	cin>>x>>y>>s;
	double t1 = (100.0+x)/100.0;
	double t2 = (100.0+y)/100.0;
	int w = 300;
	double a = w * t1;
	int b = a+EPS;
	cout<<b<<endl;
	return 0;
	*/
	while(1){
		int x,y,s;
		cin>>x>>y>>s;
		double t1 = (100.0+x)/100.0;
		double t2 = (100.0+y)/100.0;
		if(x==0)break;
		//cout<<"t1,t2: "<<t1<<" "<<t2<<endl;
		//printf("%lf %lf\n",t1,t2);
		int ma = 0;
		REP(i,1,s+1){
			REP(j,1,s+1){
				int a = double(i)*t1+EPS;
				int b = double(j)*t1+EPS;
				if(a+b==s){
					//cout<<"i,j: "<<i<<" "<<j<<endl;
					//cout<<"@a,b: "<<a<<" "<<b<<endl;
					int p = double(i)*t2+EPS;
					int q = double(j)*t2+EPS;
					//cout<<"@p,q: "<<p<<" "<<q<<" "<<p+q<<endl<<endl;;
					ma = max(ma,p+q);
				}
			}
		}
		cout<<ma<<endl;
	}
	return 0;
}