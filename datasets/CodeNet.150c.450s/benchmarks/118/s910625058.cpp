#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int Mire = 196470;

int main(){
  int n;
  cin >> n;
  while(n--){
    int y, m, d;
    cin >> y >> m >> d;

    if(y % 3 == 0) d += (m-1) * 20;
    else{
      for(int i = m-1 ; i >= 1 ; i--){
	if(i % 2 == 1) d += 20;
	else d += 19;
      }
    } 
    for(int i = y-1 ; i >= 1 ; i--){
      if(i % 3 == 0) d += 200;
      else d += 195;
    }
    cout << Mire - d + 1 << endl;
  }
  return 0;
}