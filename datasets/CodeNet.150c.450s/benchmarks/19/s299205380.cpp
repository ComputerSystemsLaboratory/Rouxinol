#include <iostream>
#include <array>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[]){
  int x,y;
  for(;;){
    cin >> x;
    cin >> y;
    if(x == 0 && y ==0)break;
    x < y?cout << x << " " << y << endl:cout << y << " " << x << endl;
  }
  return 0;
}