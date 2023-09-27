#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdio>
#include <queue>
using namespace std;

int a[2000];
int n, m;

bool rec(int val, int num){
  if(val == 0){
    return true;
  }else if(val < 0){
    return false;
  }

  for(int i=num;i<n;i++){
    if(rec(val-a[i], i + 1)){
      return true;
    }
  }
  return false;
}

int main(void){
  cin >> n;
  for(int i=0;i<n;i++)
    cin >> a[i];
  cin >> m;
  vector<bool> out(m);
  for(int i=0;i<m;i++){
    int val;
    cin >> val;
    out[i] = rec(val, 0);
  }


  for(int i=0;i<m;i++){
    if(out[i]){
      cout << "yes"  << endl;
    }else{
      cout << "no" << endl;
    }
  }
  return 0;
}