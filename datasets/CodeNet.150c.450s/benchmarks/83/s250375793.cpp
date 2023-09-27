#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

  int n,w,w1[100],v1[100];

  cin>>n>>w;
  vector <int> now[n+1];

  for(int i=0;i<n;i++) cin>>v1[i]>>w1[i];
  for(int i=0;i<n+1;i++) now[i].assign(w+1,0);

  for(int i=0;i<n;i++) for(int j=0;j<w+1;j++){
      if(j<w1[i]) now[i+1][j]=now[i][j];
      else now[i+1][j]=max(now[i][j],now[i][j-w1[i]]+v1[i]);
    }

  sort(now[n].begin(),now[n].end());
  cout<<now[n][w]<<endl;

  return 0;
}