#include <iostream>
#include <algorithm>
using namespace std;
static const int N = 10;

int main(){
  int input[N], left[N], right[N], leftNum, rightNum;
  int T;
  cin >> T;
  while(T--){
    for(int i = 0; i < N; i++)
      cin >> input[i];
    leftNum = 0;
    rightNum = 0;
    leftNum++;
    for(int i = 1; i < N; i++){
      if(left[leftNum - 1] < input[i]){
        left[leftNum] = input[i];
        leftNum++;
      } else {
        right[rightNum] = input[i];
        rightNum++;
      }
    }
    if(is_sorted(right, right + rightNum)){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}