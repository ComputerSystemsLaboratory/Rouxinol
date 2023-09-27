#include <iostream>
using namespace std;

int main() {
  int a,b,c,x;
  cin >> a >> b >> c;

  int max,min, mid;

  if(a<=b){
    max = b;
    min = a;
    if(max<=c){
      mid = max;
      max = c;
    }
    else{
      mid = c;
    }
  }
  else{
    max = a;
    min = b;
    if(max<=c){
      mid = max;
      max = c;
    }
    else{
      mid = c;
    }
  }
  

  if(mid<=min){
    x = min;
    min = mid;
    mid = x;
  }

  cout << min << " " << mid << " " << max << endl;


  
}