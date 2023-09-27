#include <iostream>
using namespace std;

int main(){

  while(1){
    int n,p;
    cin  >> n >> p;
    if(n == 0 && p == 0) break;
    int stone[60]={}, i = 0, x = p;
    while(1){
      if(stone[i] == p){
	cout << i <<endl;
	break;
      }
      if(x == 0){
	x = stone[i];
	stone[i] = 0;
      }
      else{
	stone[i]++;
	x--;
      }
      i++;
      if(i == n) i = 0;
    }


  }

  return 0;
}