#include <bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i=0;i<n;i++)
#define int long long
int n;
int d[102];
int num[21];
int mem[21];

signed main(){
  int v;
  cin>>n;
  n--;
  loop(i,n)cin>>d[i];
  cin>>v;
  loop(i,n){
    if(i==0){
      num[d[i]]=1;
      continue;
    }
    loop(j,21)mem[j]=0;
    loop(j,21){
      if(0<=j-d[i])mem[j-d[i]]+=num[j];
      if(j+d[i]<=20)mem[j+d[i]]+=num[j];
    }
    loop(j,21)num[j]=mem[j];
  }
  cout<<num[v]<<endl;
  return 0;
}