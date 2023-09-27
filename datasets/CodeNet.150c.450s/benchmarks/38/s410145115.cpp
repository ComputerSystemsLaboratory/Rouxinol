#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>


using namespace std;

bool isTri(int a, int b, int c){
  if(max(a, b) < c){
    if(pow(c, 2.0) == pow(a, 2.0) + pow(b, 2.0)){
      return true;
    }
  }else{
    if(pow(max(a, b), 2.0) == pow(min(a, b), 2.0) + pow(c, 2.0)){
      return true;
    }
  }
  return false;
}


int main(){
  int a, b, c;
  int num;
  cin >> num;
  
  while(cin >> a >> b >> c){
    if(isTri(a, b, c)){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }
    
}