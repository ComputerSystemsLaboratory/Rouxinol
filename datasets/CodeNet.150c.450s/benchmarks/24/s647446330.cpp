#include<iostream>
#include<algorithm>
#include<utility>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;
typedef pair<int,int> p;
typedef pair<int,p> pip;

int main(){
	int n,m;
	while(cin>>n>>m,n||m){
		int pin,din;
		pip d[n];
		rep(i,n){
			cin>>din>>pin;
			d[i]=pip(pin,p(din,i));
		}
		sort(d,d+n);
		for(int i=n-1;i>=0;i--){
			if(d[i].second.first<=m){
				m-=d[i].second.first;
				d[i].second.first=0;
			}else{
				d[i].second.first-=m;
				m=0;
			}
			if(m<=0)break;
		}
		int sum=0;
		rep(i,n){
			sum+=d[i].second.first*d[i].first;
		}
		cout<<sum<<endl;
	}
	return 0;
}