#include<vector>
#include<list>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int n;
  int sm;
  while(cin>>n&&n){
    n=1000-n;
    sm=0;
    while(n>=500){
      n-=500;
      sm++;
    }
    while(n>=100){
      n-=100;
      sm++;
    }
    while(n>=50){
      n-=50;
      sm++;
    }
    while(n>=10){
      n-=10;
      sm++;
    }
    while(n>=5){
      n-=5;
      sm++;
    }
    while(n){
      n--;
      sm++;
    }
    cout<<sm<<endl;
  }
  return 0;
}