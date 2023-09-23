#include<iostream>  
#include<cstdio>  
#include<cstring> 
#include <cmath> 
#include<stack>
#include<vector>
#include<map> 
#include<set>
#include<queue> 
#include<algorithm>  
using namespace std;

typedef long long LL;
const int INF = (1<<30)-1;
const int mod=1000000007;
const int maxn=105;

int a[maxn];
int b[maxn],c[maxn];
int cnt1,cnt2;

bool ok(int b[],int c[]){
	for(int i=0;i<cnt1;i++){
		if(b[i] < b[i-1]) return false;
	}
	
	for(int i=0;i<cnt2;i++){
		if(c[i] < c[i-1]) return false;
	}
	return true;
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		for(int i=0;i<10;i++) scanf("%d",&a[i]);
		
		int flag=0;
		for(int i=0;i< 1<<10;i++){
			 cnt1=0;cnt2=0;
			memset(b,0,sizeof(b));
			memset(c,0,sizeof(c));
			for(int j=0;j<10;j++){
				if(i>>j & 1) b[cnt1++]=a[j];
				else c[cnt2++]=a[j];				
			}
			
			if(ok(b,c)){
					flag=1;
					break;			
				}	
		//	printf("cnt1=%d  cnt2=%d\n",cnt1,cnt2);
		}
		if(flag) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}