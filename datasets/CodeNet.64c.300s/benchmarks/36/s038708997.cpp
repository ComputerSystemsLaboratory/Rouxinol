#include <iostream>
using namespace std;

int main(){
  int a, b, c, min, mid, max;
  cin >> a >> b >> c;
  min = a;
  if (min > b){
    min = b; mid = a;
  } else{
    mid = b;
  }
  if (min > c){
    max = mid; mid = min; min = c;
  } else{
    if(mid < c){
      max = c;
    } else{
      max = mid; mid = c;
    }
  }
  cout << min << " " << mid << " " << max << "\n";
}