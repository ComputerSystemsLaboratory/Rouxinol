#include<iostream>
#include<cmath>
using namespace std;

int main(){

  int d;

  while(cin >> d){

    double ans = 0;

    for(int i=0;i<600/d;i++){
      ans += d * pow((double)i*(double)d,2.0);
    }

    cout << (int)ans << endl;
  }
}