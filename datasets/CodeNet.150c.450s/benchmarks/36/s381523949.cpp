#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
  int d,a,sum;
  while(cin >> d &&d){
    a = 600 / d;
    sum = 0;
    for(int i=1;i<a;i++){
      sum += d*d*i*d*i;
    }
    cout << sum << endl;
  }
}