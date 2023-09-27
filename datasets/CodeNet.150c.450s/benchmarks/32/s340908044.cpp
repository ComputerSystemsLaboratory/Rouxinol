#include <iostream>
#include <algorithm>

using namespace std;

int main(){
 int p[210];
 int m,nm,nM,sub=0,ans;
 while(1){
  cin >> m >> nm >> nM;
  if(m==0)break;
  sub = 0;
  int i;
  for(i=1;i<=m;i++){
   cin >> p[i];
   if(nm<i && i<=nM+1){
    if(p[i-1]-p[i] >= sub){
     sub=p[i-1]-p[i];
     ans=i-1;
    }
   }
  }
  cout << ans << endl;
 }
 return 0;
}
