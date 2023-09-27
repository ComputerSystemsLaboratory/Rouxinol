#include<iostream>
#include<string.h>
using namespace std;

int main(){
  string str;
  int h,m,l;

  while(cin >> str){
    if( str == "-")break;
    cin >> m;
    l = str.size();
    for (int i = 0 ; i < m ; i++){
      cin >> h;
      string left = str.substr(0,h);
      string right = str.substr(h, l);
      str =  right + left;
    }
      cout << str << endl;
  }

  return 0;
}