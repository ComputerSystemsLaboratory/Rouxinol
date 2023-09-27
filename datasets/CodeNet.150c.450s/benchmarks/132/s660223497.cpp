#include <iostream>
#include <cstdio>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)
#define rep1(i,n) for(int i=1;i<=(n);++i)
#define all(c) (c).begin(),(c).end()
int main(){
	int n,p;
	while(true){
		scanf("%d%d",&n,&p);
		if(n==0) break;
		int st[50]={},in=p;
		for(int cnt=0;;cnt++){
			if(cnt==n) cnt=0;
			if(in!=0) st[cnt]++,in--;
			else in+=st[cnt],st[cnt]=0;
			if(st[cnt]==p){
				printf("%d\n",cnt);
				break;
			}
		}
	}
	return 0;
}