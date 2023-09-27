#include <iostream>
using namespace std;

int N;
int ans[1100] = {0};

int main(){

  int p = 2;
  for(int i = 3; i < 1050 ; p++ ,i += p ){
    for(int j = i ; j < 1050; j += p){
      ans[j]++;
    }
  }

  while(1){
    cin >> N;
    if(N == 0) break;
    cout << ans[N] << endl;
  }

  return 0;
}