#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  vector<string> V;
  bool locked = true;
  int N,M;
  string S;
  scanf("%d", &N);
  for (int i=0; i<N; i++) {
    cin >> S;
    V.push_back(S);
  }
  scanf("%d", &M);
  for (int i=0; i<M; i++) {
    cin >> S;
    if (find(V.begin(), V.end(), S) != V.end()) { // 登録されている
      if (locked) {
	cout << "Opened by " << S << endl;
      } else {
	cout << "Closed by " << S << endl;
      }
      locked = !locked;
    } else {
      cout << "Unknown " << S << endl;
    }
  }  
}