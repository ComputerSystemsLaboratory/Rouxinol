#include <iostream>
using namespace std;

int a,b;
std::string c;

int main(){
  cin >> a >> b;
  if(a < b){ c = "<";}
  else if(a == b){ c = "==";}
  else { c = ">";}

  cout << "a " << c << " b" << endl;
  
  return 0;
  }