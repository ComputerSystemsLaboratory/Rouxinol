#include <bits/stdc++.h>
using namespace std;


int main(){
  int n; cin >>n;
  for(int i=0; i<n; i++){
    float x1, y1, x2, y2, x3, y3, x4, y4;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    if((x2-x1)*(y3-y4)-(y2-y1)*(x3-x4) == 0){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
  
  
