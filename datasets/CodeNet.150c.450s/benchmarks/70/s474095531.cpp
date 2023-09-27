#include <iostream>
using namespace std;

int main(){
  int day[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  string s[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
  int m, d;

  while(cin >> m >> d, m || d){
    int sum = 2;
    for(int i = 1; i < m; i++){
      sum += day[i - 1];
    }
    sum += d;
    cout << s[sum % 7] << endl;
  }
}