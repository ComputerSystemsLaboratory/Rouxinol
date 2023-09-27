#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>

#define rep(i,n) for(int i=0;i<n;i++)
#define reps(i,n) for(int i=1;i<=n;i++)
#define sint(i) scanf("%d",&i);
#define sintt(i,j) scanf("%d%d",&i,&j);
#define sinttt(i,j,k) scanf("%d%d%d",&i,&j,&k);

using namespace std;

int masu[10000];


int main(){
	while(1){
		int n,m;
		sintt(n,m);
		
		if(n==0)break;
		
		rep(i,10000){
			masu[i]=0;
		}
		
		
		rep(i,n){
			rep(j,m){
				int a;
				sint(a);
				masu[j]+=a<<i;
			}
		}
		
		
		int maxi=0;
		
		rep(i,1<<n){
			int cont=0;
			rep(j,m){
				int cont2=0;
				//printf("%d-",masu[j]^i);
				rep(k,n){
					//printf("%d",(masu[j]^i)&(1<<k));
					if(((masu[j]^i)&(1<<k))>0){
						cont2++;
					}
				}
				//printf("-%d ",cont2);
				cont+=max(cont2,n-cont2);
			}//puts("");
			maxi=max(maxi,cont);
		}
		
		
		printf("%d\n",maxi);
	}
}
/*
3 6
1 0 0 0 1 0
1 1 1 0 1 0
1 0 1 1 0 1 

*/