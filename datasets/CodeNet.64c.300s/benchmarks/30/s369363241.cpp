#include <iostream>
#include <vector>
using namespace std;
const int coin[6] = {1,5,10,50,100,500};
const int sen = 1000;
int main(){
  int n;
  while(cin >> n, n != 0){

    int oturi = sen - n;
    int sum = 0;
    int cnt = 5;
    while(oturi != 0){
      if(oturi/coin[cnt] != 0){
	sum++;
	oturi -= coin[cnt];
      }
      else{
	cnt--;
      }
    }
    cout << sum << endl;
  }
  return 0;
}