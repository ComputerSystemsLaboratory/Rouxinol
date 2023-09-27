// 1_8_D
#include <iostream>
#include <string>
using namespace std;

int main(){
  string s, p;
  cin >> s >> p;

  if((s+s).find(p) != string::npos){
    cout << "Yes" << endl;
  } else{
    cout << "No" << endl;
  }
  return 0;
}