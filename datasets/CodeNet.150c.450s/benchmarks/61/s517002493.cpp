#include <iostream>
using namespace std;

int nums[200];

int main(){
  int N, A, B, C, X;

  while(cin >> N >> A >> B >> C >> X && (N || A || B || C || X)){
    int pos = 0;
    int res = 0;
    for(int i = 0; i < N; i++) cin >> nums[i];
    if(nums[pos] == X) pos++;
    while(pos < N){
      res++;
      X = (A * X + B) % C;
      if(nums[pos] == X) pos++;
      if(res > 10000){
	res = -1;
	break;
      }
    }
    cout << res << endl;
  }
  return 0;
}