#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(){
  string str;
  string temp;
  int m;
  int h;

  while(true){
    cin >> str;
    if( str == "-"){
      break;
    }
    cin >> m;
    for( int i = 0; i < m; ++i){
      cin >> h;
      temp = str.substr( 0, h);
      str += temp;
      str.erase(str.begin(), str.begin()+h);
    }
    cout << str << endl;
  }
  return 0;
}