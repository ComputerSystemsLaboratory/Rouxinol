#include <iostream>
#include <algorithm>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  int high[10];
  REP(i,10){
    cin >> high[i];
  }
  sort(high,high+10);
  cout << high[9] << endl;
  cout << high[8] << endl;
  cout << high[7] << endl;
}