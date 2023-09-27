#include <iostream>
 
using namespace std;
 
int main() {
  int A_score;
  int S = 0;
  for (int i = 0; i < 4; i++) {
    cin >> A_score;
    S += A_score;
  }
  int B_score;
  int T = 0;
  for (int i = 0; i < 4; i++) {
    cin >> B_score;
    T += B_score;
  }
  S >= T ? cout << S << endl : cout << T << endl;
  return 0;
}
