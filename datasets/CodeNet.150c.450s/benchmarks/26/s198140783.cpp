#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char *argv[]){
  int a,b;
  cin >> a;
  cin >> b;
  if(a < b){
    cout << "a < b" << endl;
  }else if(a > b){
    cout << "a > b" << endl;
  }else{
    cout << "a == b" << endl;
  return 0;
  }
}