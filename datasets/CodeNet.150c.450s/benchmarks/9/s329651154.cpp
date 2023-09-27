#include<iostream>
#include<string>
using namespace std;

int main(){
  string str, str1, str2;
  int m, h;
  
  while(1){  
    cin >> str;
    if( str[0] == '-') break;
    cin >> m;
    for( int j = 0; j < m; j++){
      cin >> h;
      str1 = str.substr(0, h);
      str2 = str.substr(h, str.size() - h);
      str = str2 + str1;
    }
    cout << str << endl;
  }

  return 0;
}