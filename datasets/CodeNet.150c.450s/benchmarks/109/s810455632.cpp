#include<cstdio>
#include<cstdlib>
#include<map>
#include<algorithm>
#define mp make_pair
#include<iostream>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef pair<int,int> pi;
char in[20];
int n;
pi table[20000];
int main(){
	while(scanf("%d",&n),n){
		rep(i,n)rep(j,2){
			cin>>in;
			table[i*2+j]=mp(atoi(in)*3600+atoi(&in[3])*60+atoi(&in[6]),1-j);
		}
		sort(table,table+2*n);
		int ans=0,c=0;
		rep(i,2*n){
			if(table[i].second)
				c++;
			else c--;
			ans=max(ans,c);
		}
		printf("%d\n",ans);
	}
	return 0;
}