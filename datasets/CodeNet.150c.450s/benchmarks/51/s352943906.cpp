#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;

int n;

int main(){
  int v[40];
  for (int i = 1; i < 31; i++){
    v[i] = 0;
  }
  for (int i = 1; i < 29; i++){
    cin >> n;
    v[n] = 1;
  }
  for (int i = 1; i < 31; i++){
    if(v[i] == 0) cout << i << endl;
  }
  return 0;
}