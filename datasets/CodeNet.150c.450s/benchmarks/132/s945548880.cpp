#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	int n,p;
	while(1){
		cin>>n>>p;
		if(n==0 && p==0)break;
		int dt[n];
		int cop=p;
		int counta=0;
		rep(i,n)dt[i]=0;
		int ans;
		while(1){
			counta=counta%n;
			if(cop!=0){
				dt[counta]++;
				cop--;
			}else{
				int judge=0;
				rep(i,n){
					if(i!=counta)if(dt[i]==0)judge++;
				}
				if(judge==n-1){
					ans=counta;
					break;
				}else{
					cop=dt[counta];
					dt[counta]=0;
				}
			}
			counta++;
		}
		cout<<ans<<endl;
	}
	return 0;
}