#include <bits/stdc++.h>
using namespace std;
int n;
int num[20];
bool can[100000];

void dfs(int i,int sum){
  can[sum] = 1;
  if( sum>2000 || i == n) return;
  dfs(i+1,sum+num[i]);
  dfs(i+1,sum);
}

int main(){

  cin>>n;
  for(int i=0;i<n;i++)cin>>num[i];
  dfs(0,0);
  int q;
  cin>>q;
  while(q--){
    int a;
    cin>>a;
    cout<<(can[a]? "yes":"no")<<endl;

  }


  return 0;
}