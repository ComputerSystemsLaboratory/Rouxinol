#include <bits/stdc++.h>
using namespace std;
int tree[260];

int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)cin>>tree[i];

  for(int i=1;i<=n;i++){
    printf("node %d: key = %d, ",i,tree[i]);
    if(i!=1) printf("parent key = %d, ",tree[i/2]);
    if(i*2<=n)printf("left key = %d, ",tree[i*2]);
    if(i*2+1<=n)printf("right key = %d, ",tree[i*2+1]);
    cout <<endl;
  }
  return 0;
}