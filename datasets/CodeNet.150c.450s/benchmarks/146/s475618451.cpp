#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <map>
#include <functional>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
  double x1, y1, x2, y2, x3, y3, x4, y4;
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if(abs((y2 - y1) * (x4 - x3) - (y4 - y3) * (x2 - x1)) <= 1e-10){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }
}