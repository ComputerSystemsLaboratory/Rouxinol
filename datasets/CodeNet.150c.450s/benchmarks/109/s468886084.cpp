#include<iostream>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define INF 1e6
using namespace std;

int main(){
	int n,hh[2],mm[2],ss[2];
	while(cin>>n,n){
		int time[86500];
		rep(i,86500)time[i]=0;
		rep(i,n){
			scanf("%d:%d:%d",&hh[0],&mm[0],&ss[0]);
			scanf("%d:%d:%d",&hh[1],&mm[1],&ss[1]);
			time[hh[0]*3600+mm[0]*60+ss[0]]++;
			time[hh[1]*3600+mm[1]*60+ss[1]]--;	
		}
		rep(i,86490){
			time[i+1]+=time[i];
		}
		int inf=0;
		rep(i,86500){
			if(time[i]==0)continue;
			else if(inf<time[i]){
				inf=time[i];
			}
		}
		cout<<inf<<endl;
	}
	return 0;
}