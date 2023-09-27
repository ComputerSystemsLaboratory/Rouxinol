#include <iostream>
using namespace std;
int main(){
  int n, b, f, r, a, v[4][3][10];
  bool x[4][3][10] = {};
  cin >> n;
  for(int i=0; i<n; i++){
   cin >> b >> f >> r >> a;
   if(x[b-1][f-1][r-1])
    v[b-1][f-1][r-1] += a;
   else{
   x[b-1][f-1][r-1] = true;
   v[b-1][f-1][r-1] = a;
   }
  }
  for(int s=0; s<4; s++){
   for(int j=0; j<3; j++){
    for(int t=0; t<10; t++){
      if(x[s][j][t])
       cout << ' ' << v[s][j][t];
      else
       cout << ' ' << 0;
    }
    cout << endl;
  }
  if(s == 3)
   break;
  cout << "####################" << endl;
 }
  return 0;
}