#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

void newline() {cout << endl;}
template <typename T> void display(T input){cout << input;}
template <typename T> void put(T input){display(input); newline();}
void iput(int input) {put(input);}
void lput(long long input) {put(input);}

int main(){
  while(true){
    int n, in, prev, min, sa;
    vector<int> input;
    cin >> n;
    if(n != 0){
      for(int i=0; i<n; i++){
        cin >> in;
        input.push_back(in);
      }
      sort(input.begin(), input.end());
      for(int i=1; i<n; i++){
        sa = abs(input[i-1] - input[i]);
        if(i==1){
          min = sa;
        }else{
          min = min > sa ? sa : min;
        }
      }
      iput(min);
    }else{
      break;
    }
  }
}