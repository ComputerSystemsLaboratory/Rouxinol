#include <iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(void){
  std::string str;
  int n;
  cin >> str >> n;
  std::string meirei;
  int a,b;
  std::string tmp;
  std::string rep;
  for(int i = 0; i < n ;i++){
    cin >> meirei >> a >> b;
    if(meirei == "print"){
      for(int j = a;j <= b;j++){
        cout << str[j];
      }
      cout << endl;
    }else if(meirei == "reverse"){
      for(int j = 0;j <= (b-a)/2;j++){
        tmp[0] = str[a+j];
        str[a+j] = str[b-j];
        str[b-j] = tmp[0];
      }
    }else if(meirei == "replace"){
      cin >> rep;
      for(int j = a;j <= b;j++){
        str[j] = rep[j-a];
      }
    }
  }
}