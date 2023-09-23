#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,r[200002];
  int maxz=-2000000000;
  int minz;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>r[i];
  }
  minz=r[0];
  for(int i=1;i<n;i++){
    maxz=max(maxz,r[i]-minz);
    minz=min(minz,r[i]);
  }
  cout<<maxz<<endl;
}