#include<iostream>
#include<string>
#include<vector>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	int n,r,p,c;
	while(1){
		cin>>n>>r;
		if(n==0 && r==0)break;
		int dt[n];
		int alt[n];
		rep(i,n)alt[i]=0;
		for(int i=n;i>0;i--){
			dt[n-i]=i;
			alt[i-1]=0;
		}
		rep(j,r){
			cin>>p>>c;
			loop(i,p+c-1,n)alt[i]=dt[i];
			rep(i,p-1)alt[c+i]=dt[i];
			loop(i,p-1,p+c-1)alt[i-p+1]=dt[i];
			rep(i,n)dt[i]=alt[i];
		}
		cout<<dt[0]<<endl;
	}
	return 0;
}