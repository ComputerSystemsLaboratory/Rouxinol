#include <bits/stdc++.h>
using namespace std;

const string day[] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
const int da[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void){
  int m, d;
  while(cin >> m >> d, m | d){
    while(1){
      m--;
      if(m > 0){
        d += da[m];
      }else{
        break;
      }
    }
    cout << day[d%7] << endl;
  }
  return 0;
}