#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <map>
#include <functional>
#include <cmath>
#include <cstdio>
using namespace std;

#define PI 4*atan(1);

vector<bool> a;
void func(int n){

  for(int i = 0; i <= n; i++){
    a.push_back(true);
  }
  for(int i = 2; i * i <= n; i++){
    if(a[i]){
      for(int j = 2; i * j <= n; j++){
        a[i * j] = 0;
      }
    }
  }
  int cnt = 0;
  for(int i = 2; i <= n; i++){
    if(a[i]){
      cnt++;
    }
  }
  cout << cnt << endl;
}

int main(){
  int n;
  while(cin >> n){
    func(n);
  }
}