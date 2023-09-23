#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	int n,m,p;
	while(1){
		cin>>n>>m>>p;
		if(!n && !m && !p)break;
		int dt[n];
		int sum=0;
		rep(i,n){
			cin>>dt[i];
			sum+=dt[i];
		}
		sum*=(100-p);
		if(dt[m-1]!=0)cout<<sum/dt[m-1]<<endl;
		else cout<<0<<endl;
	}
	return 0;
}