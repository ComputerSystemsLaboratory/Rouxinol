#include <iostream>
using namespace std;

int a,b,c;
std::string ans;

int main(){
  cin >> a >> b >> c;
  if(a < b && b < c){ ans = "Yes";}
  else{ ans = "No";}
   
  cout << ans << endl;
  return 0;
  }