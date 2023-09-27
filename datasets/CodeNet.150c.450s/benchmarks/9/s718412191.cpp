#include <iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(void){
  std::string str;
  int n;
  int sp;
  std::string split1;
  std::string split2;
  while(cin >> str){
    if(str == "-"){
      break;
    }
    cin >> n;
    for(int i = 0;i < n;i++){
      cin >> sp;
      split1 = str.substr(sp);
      split2 = str.substr(0,sp);
      str = split1+split2;
    }
    cout << str << endl;
  }
}