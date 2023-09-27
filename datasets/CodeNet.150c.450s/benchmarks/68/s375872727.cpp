#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  int n;
  while(true){
    cin >> n;
    if(!n) break;
    int min_diff = 1000000;
    int a[n];
    for(int i = 0; i < n; i++){
      cin >> a[i];
    }

    for(int i = 0; i < n; i++){
      for(int j = i + 1; j < n; j++){
        int diff = abs(a[i] - a[j]);
        if(min_diff > diff) min_diff = diff;
      }
    }

    cout << min_diff << endl;
  }
}