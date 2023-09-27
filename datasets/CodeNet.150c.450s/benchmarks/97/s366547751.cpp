#include <iostream>
#include <algorithm>

int dx[] = {-1,0,1,0},dy[] = {0,-1,0,1};
int x[1000],y[1000];
int Mw,Mn,me,ms;
using namespace std;


int main(){

  int n,p,d;
  while(1){
    Mw = ms = 0;
    Mn = me = 0;
    x[0] = y[0] = 0;
    cin >> n;
    if(n == 0)break;

    for(int i = 1; i < n ; i++){
     
      cin >> p >> d;
      x[i] = x[p] + dx[d];
      y[i] = y[p] + dy[d];

      Mw = min(x[i],Mw);
      Mn = max(y[i],Mn);
      ms = min(y[i],ms);
      me = max(x[i],me);
    }
    cout << me - Mw +1 << " ";
    cout << Mn - ms +1 << endl;
   }
  return 0;
}