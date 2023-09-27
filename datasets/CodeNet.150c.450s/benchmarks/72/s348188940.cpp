// 1_8_A
#include <iostream>
using namespace std;

string swap_case(string str){
  for(int i = 0; i < (int)str.size(); i++){
    if(islower(str[i])){
      str[i] = toupper(str[i]);
    } else if(isupper(str[i])){
      str[i] = tolower(str[i]);
    }
  }
  return str;
}

int main(){
  string str;
  getline(cin, str);
  cout << swap_case(str) << endl;
  return 0;
}