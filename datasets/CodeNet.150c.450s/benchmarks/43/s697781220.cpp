#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;

#define PI 4*atan(1);

int main(){
  int n;
  while(cin >> n && n != 0){
    int a, b, asum = 0, bsum = 0;
    for(int i = 0; i < n; i++){
      cin >> a >> b;
      if(a > b){
        asum += (a + b);
      }else if(a < b){
        bsum += (a + b);
      }else{
        asum += a;
        bsum += b;
      }
    }
    cout << asum << " " << bsum << endl;
  }
}