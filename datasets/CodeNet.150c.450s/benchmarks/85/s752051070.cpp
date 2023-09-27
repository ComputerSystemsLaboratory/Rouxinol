#include<cstdio>
#include<iostream>
#include<map>
using namespace std;
const int MAX_V = 100;
int a[MAX_V+1];
map<pair<int,int>, int> memo;

int dp(int s,int t){
  int &res=memo[make_pair(s,t)];
  if(res!=0) return res;
  if(t-s<2) return 0;
  int min=0x7fffffff;
  for(int i=s+1;i<=t-1;i++){
    int sum=dp(s,i)+dp(i,t)+a[s]*a[i]*a[t];
    if(sum<min){
      min=sum;
    }
  }
  res=min;
  return res;
}

int main(){
  int n; scanf("%d",&n);
  for(int i=0;i<n;i++){
    int fst,snd;
    scanf("%d %d",&fst,&snd);
    a[i]=fst; a[i+1]=snd;
  }
  int sum=dp(0,n);
  printf("%d\n",sum);
}