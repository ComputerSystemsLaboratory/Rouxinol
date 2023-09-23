#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  string str;
  getline(cin, str);
  for(int i=0;i<str.size();i++){
    if(str[i] >= 'a' && str[i] <= 'z')
      cout << (char)toupper(str[i]);
    else if(str[i] >= 'A' && str[i] <= 'Z')
      cout << (char)tolower(str[i]);
    else
      cout << str[i];
  }
  cout << endl;
  return 0;
}