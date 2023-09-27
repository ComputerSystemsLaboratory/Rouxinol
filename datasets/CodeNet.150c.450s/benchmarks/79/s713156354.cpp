#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<string>
#include<cmath>
#include<string.h>
using namespace std;

typedef long long int64;
typedef int int32;
typedef char int8;

#define rep(i,j) for(int i=0;i<j;i++)
#define repeat(i,j,k) for(int i=(j),i<(k);i++)
#define repeat_eq(i,j,k) for(int i=(j),i<=(k);i++)
#define rev_rep(i,j,k) for(int i=(j)-1;i>=k;i--)
#define all(v) (v).begin(),(v).end()

const int INF=1<<30;//=10E10

void mycopy(int *out,int *in,int num){
  copy(in,in+num,out);
}

int main()
{
  while(true){
    int n,r;cin>>n>>r;
    if(!n && !r)break;
    int card[2][51];
    rep(i,n)card[0][i]=n-i;//初期化
    rep(i,r){
      int p,c;cin>>p>>c;
      
      mycopy(card[1],card[0]+p-1,c);
      mycopy(card[1]+c,card[0],p-1);
      mycopy(card[0],card[1],p+c-1);
      
    }
    cout<<card[0][0]<<endl;
  }
  return 0;
}