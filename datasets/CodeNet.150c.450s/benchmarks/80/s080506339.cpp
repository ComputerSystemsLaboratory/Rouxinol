//0510:   Score

#include <iostream>
using namespace std;

#define NUM 1000

int main(){
  int s[NUM];
  int t[NUM];
  int sums = 0;
  int sumt = 0;
  int i;

  for (i = 0; i < 4; i++){
    cin >> s[i];
    sums += s[i];
  }

  for (i = 0; i < 4; i++){
    cin >> t[i];
    sumt += t[i];
  }

  if (sums > sumt){
    cout << sums << '\n';
  }
  else {
    cout << sumt <<'\n';
  }
return 0;
}