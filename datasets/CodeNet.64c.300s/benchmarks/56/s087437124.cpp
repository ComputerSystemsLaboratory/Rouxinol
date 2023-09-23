#include<bits/stdc++.h>
using namespace std;

int get_days(int Y, int M, int D){
  int sum = 0;
  for(int i = 1; i < Y; i++){
    for(int j = 1 ; j <= 10; j++){
      if(i % 3 == 0 || j % 2 == 1) sum += 20;
      else sum += 19;
    }
  }
  for(int j = 1; j < M; j++){
    if(Y % 3 == 0 || j % 2 == 1) sum += 20;
    else sum += 19;
  }
  sum += D;
  return sum;
}

int main(){
  int n;
  cin >> n;

  while(n--){
    int Y, M, D;
    cin >> Y >> M >> D;
    cout << get_days( 1000, 1, 1) - get_days( Y, M, D) << endl;
  }
}