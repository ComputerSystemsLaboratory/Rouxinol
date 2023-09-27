#include<iostream>
#include<cmath>
#include<algorithm>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	int n;
	pair<long double,long double> p[4],vec[2];
	cin>>n;
	rep(j,n){
		rep(i,4)cin>>p[i].first>>p[i].second;
		rep(i,2){
			vec[i].first=p[i*2].first-p[i*2+1].first;
			vec[i].second=p[i*2].second-p[i*2+1].second;
		}
		double check=vec[0].first*vec[1].second-vec[0].second*vec[1].first;
		if(check==0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}