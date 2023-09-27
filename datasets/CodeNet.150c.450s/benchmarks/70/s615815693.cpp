#include<iostream>
#include<string>
using namespace std;

int main(){

  int m, d, cnt, d1[12];
  int p[12] = {31, 29, 31, 30, 31, 30,
               31, 31, 30, 31, 30, 31};
  string str[7] = {"Monday", "Tuesday", "Wednesday",
                   "Thursday", "Friday", "Saturday",
                   "Sunday"};
  
  d1[0] = 3;
  for(int i=1; i<12; i++){
    d1[i] = (d1[i-1] + p[i-1]) % 7;
  }

  while(1){
    cin >> m >> d;
    if(m == 0 && d == 0){
      break;
    }
    cout << str[(d1[m-1] + d - 1) % 7] << endl;
  }

  return 0;

}