#include<iostream>
#include<string>
using namespace std;
int sum_of_days(int m, int d){
  int sum = 0;
  int mon[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,};
  for(int i = 0; i < m; i++) sum += mon[i];
  return sum + d - 1;
}
string what_day(int s){
  string day[] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
  return day[s % 7];
}
int main(){
  int m, d;
  while(cin >> m >> d, !(m==0 && d==0)){
    cout << what_day(sum_of_days(m, d)) << endl;
  }
}