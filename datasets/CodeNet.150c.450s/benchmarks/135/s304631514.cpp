#include<stdio.h>
#include<string.h>
using namespace std;
#define rep(i,j) for(int i=0;i<(j);i++)
int memo[15000000];
int main(){
	int n,m,w[1501],h[1501],t,s,cnt;
	for(;;){
		scanf("%d%d",&n,&m);
		if(!n)break;
		cnt=s=*w=*h=0;
		memset(memo,0,sizeof(memo));
		rep(i,n){
			scanf("%d",&t);
			s+=t;
			w[i+1]=s;
		}
		s=0;
		rep(i,m){
			scanf("%d",&t);
			s+=t;
			h[i+1]=s;
		}
		
		rep(i,n+1)rep(j,i){
			int c=0;
			int len = w[i] - w[j];
			if(memo[len]>0){
				cnt+=memo[len];
				continue;
			}
			int l=0,r=1;
			while(r<=m){
				if(h[r]-h[l]==len){
					c++;
					r++;
					l++;
				}
				else if(h[r]-h[l]<len)r++;
				else l++;
			}
			memo[len]=c;
			cnt+=c;
		}
		printf("%d\n",cnt);
	}
	return 0;
}