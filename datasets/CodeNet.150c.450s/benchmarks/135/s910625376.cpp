#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int n,m;
int h[2001],w[2001];
int hsum[2001],wsum[2001];
int hcnt[2000001],wcnt[2000001];

void init(){
	memset(hsum,0,sizeof(hsum));
	memset(wsum,0,sizeof(wsum));
	memset(h,0,sizeof(h));
	memset(w,0,sizeof(w));
	memset(hcnt,0,sizeof(hcnt));
	memset(wcnt,0,sizeof(wcnt));
	return;
}

int main(void){
	while(1){
		scanf("%d%d",&n,&m);
		if(n+m==0)break;
		for(int i=0;i<n;i++)scanf("%d",&h[i]);
		for(int i=0;i<n;i++)hsum[i+1]=hsum[i]+h[i];
		for(int i=0;i<m;i++)scanf("%d",&w[i]);
		for(int i=0;i<m;i++)wsum[i+1]=wsum[i]+w[i];
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n+1;j++){
				hcnt[hsum[j]-hsum[i]]++;
			}
		}
		for(int i=0;i<m;i++){
			for(int j=i+1;j<m+1;j++){
				wcnt[wsum[j]-wsum[i]]++;
			}
		}
		int cnt=0;
		for(int i=0;i<2000000;i++)cnt+=hcnt[i]*wcnt[i];
		printf("%d\n",cnt);
		init();
	}
	return 0;
}