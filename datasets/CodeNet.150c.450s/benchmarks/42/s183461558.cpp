#include <bits/stdc++.h>
#define N 100001
using namespace std;
typedef long long ll;

int main(){
  int n,q;
  cin>>n>>q;
  char name[N][11];
  int time[N];
  for(int i=0;i<n;i++)scanf("%s %d",name[i],&time[i]);
  
  queue<int> Q;
  for(int i=0;i<n;i++) Q.push(i);
  
  ll sum = 0;
  while(!Q.empty()){
    int i = Q.front();Q.pop();
    int &t = time[i];
    if(t>q) t-=q,sum+=q,Q.push(i);
    else {
      sum+=t;
      printf("%s %lld\n",name[i],sum);
    }
  }
  

  return 0;
}