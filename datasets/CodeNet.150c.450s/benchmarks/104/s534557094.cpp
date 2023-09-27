#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

const int MAX_N=30;

int n,w;
int a[MAX_N],b[MAX_N];

char s[8];

int main(){
	scanf("%d",&w);
	scanf("%d",&n);
	REP(i,n){
		scanf("%s",s);
		int l=strlen(s);
		b[i]=-1;
		REP(j,l){
			if (s[j]!=','){
				if (b[i]==-1){
					a[i]*=10;
					a[i]+=s[j]-'0';
				}
				else{
					b[i]*=10;
					b[i]+=s[j]-'0';
				}
			}
			else{
				b[i]=0;
			}
		}
	}
	FOR(i,1,w+1){
		int c=i;
		for(int j=n-1;j>=0;j--){
			if (c==a[j]){
				c=b[j];
			}
			else if (c==b[j]){
				c=a[j];
			}
		}
		printf("%d\n",c);
	}
	return 0;
}