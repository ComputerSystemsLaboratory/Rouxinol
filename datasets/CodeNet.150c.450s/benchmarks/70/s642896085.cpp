#include <iostream>
using namespace std;

int nd[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string wk[7] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};

int main(void){
  int m, d;
  while(cin >> m >> d && m && d){
    int sd = d;
    for(int i = 1; i < m; i++) sd += nd[i];
    cout << wk[sd % 7] << endl;
  }
  return 0;
}