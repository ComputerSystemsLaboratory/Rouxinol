#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int x,y,s;
  while(cin >> x >> y >> s,x){
    int i,j,x2,y2,ans=-1;
    for(i=1;i<s;i++){
      for(j=1;j<s;j++){
        x2=i*(100+x)/100;
        y2=j*(100+x)/100;
        if(x2+y2==s)ans = max(ans,i*(100+y)/100+j*(100+y)/100);
      }
    }
    cout << ans << endl;
  }
  return 0;
}

