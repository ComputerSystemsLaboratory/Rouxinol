#include <iostream>
using namespace std;
string chgcase(string c){ 
  for(int i = 0; i < c.length();i++){
    if(c[i] <= 'z' && c[i] >= 'a'){
      c[i] = c[i] - 0x20;
    }else if(c[i] <= 'Z' && c[i] >= 'A'){
      c[i] = c[i] + 0x20;
    }   
  }
  return c;
}
int main(){
  std::string a;
  getline(cin,a);
  cout << chgcase(a)<<endl;
}