#include<string>
#include<iostream>
#include<cctype>
using namespace std;


int main(){
  int n;
  cin >> n;
  int a = 0, b = 0;
  string strt, strh; //taro, hanako
  for ( int i = 0; i < n; i++){
    cin >> strt >> strh;
    if (strt > strh) a += 3;
    else if (strt < strh) b += 3;
    else if (strt == strh) {
      a += 1;
      b += 1;
    }
  }

cout << a << " " << b << endl;

return 0;
}