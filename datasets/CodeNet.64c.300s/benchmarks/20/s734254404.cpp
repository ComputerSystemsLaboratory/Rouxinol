#include<iostream>
using namespace std;

int main(void){
  int d;
  int sum;
  int x_now;
  cin >> d;
  while(!cin.eof()){
    sum = 0;
    x_now = 0;
    for(int i=600;i!=0;){
      sum += x_now*x_now*d;
      i -= d;
      x_now += d;
    }
    cout << sum << endl;
    cin >> d;
  }
  return 0;
}