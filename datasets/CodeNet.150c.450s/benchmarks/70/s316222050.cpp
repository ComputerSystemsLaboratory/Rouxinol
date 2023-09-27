#include <iostream>
using namespace std;

int main(){
  int m, d;
  int t[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  string week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

  while(cin >> m >> d, m || d){
    int sum = 0;

    for(int i = 0; i < m - 1; i++){
      sum += t[i];
    }
    sum += d;

    cout << week[(sum + 2) % 7] << endl;
  }
}