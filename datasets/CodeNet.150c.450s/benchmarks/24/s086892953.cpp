#include<cstdio>
#include<algorithm>
#include<string>
#include<cstring>
#include<iostream>
#include<vector>
#include<map>
using namespace std;
typedef pair<int,int> P;
#define F first
#define S second
int N,M;
P p[10003];
int main(){
  while(1){
    scanf("%d %d",&N,&M);
    if(!N && !M) break;
    for(int i=0;i<N;i++){
      int d,pa;
      scanf("%d %d",&d,&pa);
      p[i]=P(pa,d);
    }
    sort(p,p+N);
    int res=0;
    for(int i=N-1;i>-1;i--){
      if(M==0) res+=p[i].S*p[i].F;
      else if(M>p[i].S) M-=p[i].S;
      else if(M<=p[i].S){
	p[i].S-=M;
	M=0;
	res+=p[i].S*p[i].F;
      }
    }
    printf("%d\n",res);
  }
}