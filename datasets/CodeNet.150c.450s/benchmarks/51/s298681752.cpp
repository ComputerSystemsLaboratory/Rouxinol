#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;

#define PI 4*atan(1);

int main(){
  bool sub[30] = {false};
  for(int i = 0; i < 28; i++){
    int tmp;
    cin >> tmp;
    sub[tmp - 1] = true;
  }
  for(int i = 0; i < 30; i++){
    if(sub[i] == false){
      cout << i + 1 << endl;
    }
  }
}