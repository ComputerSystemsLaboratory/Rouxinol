#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
  int m, nmin, nmax;
  int p[201];
  int gap;
  int ans;
  while(cin>>m>>nmin>>nmax&&m&&nmin&&nmax){
    ans = -1;
    gap = -1;

  for(int i=0; i<201; i++){
    p[i]=0;
  }

    for(int i=1; i<=m; i++){
      cin >> p[i];
    }
    for(int i=nmin; i<=nmax; i++){
      if(gap<=p[i]-p[i+1]){
        gap = p[i]-p[i+1];
        ans = i;
      }
    }
    cout << ans << endl;
  }
  return 0;
}