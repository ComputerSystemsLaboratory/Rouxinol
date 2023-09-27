#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  string str, p;
  cin >> str >> p;
  str += str;
  if(str.find(p) < str.size()){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}