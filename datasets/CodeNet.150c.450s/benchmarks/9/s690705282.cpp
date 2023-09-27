#include<iostream>
#include<string>
using namespace std;

int main(){
  string str;
  int h,i,hm;

  while(1){
    cin >> str;
    if(str == "-") break;
    cin >> h;
    for(i = 0; i < h; i++){
      cin >> hm;
      str = str.substr(hm) + str.substr(0,hm);
    }
    cout << str << endl;
  }
  return 0;
}