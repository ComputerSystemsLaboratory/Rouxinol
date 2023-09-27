#include <iostream>
#include <algorithm>
using namespace std;

int yaku(int a, int b, int c){
  int i , cnt = 0;
  for(i = a; i < b+1; i++){
    if(c%i == 0)  cnt++;
  }
  return cnt;
}

int main(){
  int a, b, c;

  cin >> a >> b >> c;
  cout << yaku(a, b, c) << endl;
}