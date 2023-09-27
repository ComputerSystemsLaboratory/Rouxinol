#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int tbl1[1000000],tbl2[1000000];
int main(){
  int n = 1000000;
  int c = 0;
  for(int i=1;i<n;++i) tbl1[i]=tbl2[i]=i;
  for(int i=2;;++i){
    int t = i*(i+1)*(i+2)/6;
    if(t>=n) break;
    for(int j=0;j+t<n;++j){
      if(t%2) tbl2[j+t]=min(tbl2[j+t],tbl2[j]+1);
      tbl1[j+t]=min(tbl1[j+t],tbl1[j]+1);
    }
  }
  while(cin>>n,n)
    cout << tbl1[n] << " " << tbl2[n] << endl;
  return 0;
}