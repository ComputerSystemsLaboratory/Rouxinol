#include <iostream>
using namespace std;
#include <algorithm>

int main(){
  int n,tri[3];

  cin >> n;

  for(int i=0;i<n;i++){
    cin >> tri[0] >> tri[1] >> tri[2];
    sort(tri,tri+3);
    if( (tri[0]*tri[0]+tri[1]*tri[1]) == tri[2]*tri[2] ) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

  return 0;
}