#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using std::setprecision;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
  double x,y,s;
  double d1,d2;
  double b,c;
  int max = 0;

  while(cin >> x >> y >> s){
    if(x == 0 && y == 0){
      break;
    }
    max = 0;

    for(int i = 1;i < s ; i++){
      for(int j= 1; j < s; j++){
        b = double(i) +double(i) *(x/100.0);
        c = double(j) + double(j)*(x/100.0);
        if(s == int(b) + int(c)){
          b = double(i)  + double(i) *  (y/100.0);
          c = double(j) + double(j) * y/100.0;
          if(max == 0 || max < int(b) + int(c)){
            max = int(b) + int(c);
          }
        }
      }
    }

    cout << max << endl;

  }
}