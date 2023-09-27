#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  while(true){
    int n, min, max;
    cin >> n >> min >> max;
    if(n == 0 && min == 0 && max == 0) break;
    int a[n];
    for(int i = 0; i < n; i++){
      cin >> a[i];
    }
    int max_gap = 0;
    int target = 0;
    for(int i = min; i <= max; i++){
      int gap = a[i - 1] - a[i];
      if(max_gap <= gap){
        max_gap = gap;
        target = i;
      }
    }

    cout << target << endl;
  }
}