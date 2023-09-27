#include<iostream>
using namespace std;
int w[1500010]={};
int main()
{
	while(1){
		int N,M,N1[2000]={},M1[2000]={};
		int sum1[2000]={}, sum2[2000]={}, ans=0, a,b,c=0;
		for(a=0;a<1500010;a++){
			w[a]=0;
		}
		cin>>N;
		cin>>M;
		if(N==0&&M==0) break;
		for(a=0;a<N;a++){
			cin>>N1[a];
			if(a==0) sum1[a]=N1[a];
			else sum1[a]=N1[a]+sum1[a-1];
		}
		for(a=0;a<M;a++){
			cin>>M1[a];
			if(a==0) sum2[a]=M1[a];
			else sum2[a]=M1[a]+sum2[a-1];
		}
		for(a=0;a<M;a++){
			for(b=0;b<M;b++){
				if(a>b) continue;
				if(a==0) {
					c=sum2[b];
				}
				else c=sum2[b]-sum2[a-1];
				w[c]++;
			}
		}
		for(a=0;a<N;a++){
			for(b=0;b<N;b++){
				if(a>b) continue;
				if(a==0) {
					c=sum1[b];
				}
				else c=sum1[b]-sum1[a-1];
				ans+=w[c];
			}
		}
		cout<<ans<<endl;
	}
}