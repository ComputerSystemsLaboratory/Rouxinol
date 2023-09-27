#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <cctype>
#include <cstdio>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  string number;
  while(1){
    cin >> number;
    if(number =="0")
      break;
    int sum=0;
    REP(i,number.size())
    sum +=(int)(number[i]-'0');
    cout << sum << endl;
    sum=0;//clear
  }
}