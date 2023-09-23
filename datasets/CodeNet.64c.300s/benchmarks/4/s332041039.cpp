#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char *argv[]){
  int a,b,c;
  cin >> a;
  cin >> b;
  cin >> c;
  if(a < b){
    if(b < c){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }else{
    cout << "No" << endl;
  }
  return 0;
}