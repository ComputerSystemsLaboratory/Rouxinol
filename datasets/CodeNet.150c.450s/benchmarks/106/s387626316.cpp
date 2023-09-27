#include <iostream>
using namespace std;

int main(){
  int i,j,k;
  int cnt=0;
  int tmp;
  cin >> i >> j >> k;
  tmp = i;
  do{
    if(k % tmp == 0){
      cnt++;
    }
    tmp++;
  }while(tmp <= j);
  cout << cnt << endl;
  return 0;
}