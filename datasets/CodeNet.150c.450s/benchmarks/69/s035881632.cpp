#include <iostream>
using namespace std;

int Balls[10];


bool not_dfs(int balls[]){
  int b = 0, c = 0;
  for (int i = 0; i < 10; i++) {
    if (b < balls[i]){b = balls[i]; continue;}
    if (c < balls[i]){c = balls[i]; continue;}
    return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 10; j++) {
      cin >> Balls[j];
    }
    if(not_dfs(Balls)) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}