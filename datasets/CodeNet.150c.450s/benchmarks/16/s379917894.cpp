#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;
  int V[20010];
  vector<int> ike;
  stack<int> S_up;
  stack<int> S_down;
  for (unsigned int i=0; i<S.size(); i++) {
    if (S[i] == '\\') {
      S_down.push(i);
      V[i] = 1;
    } else if (S[i] == '/') {
      V[i] = -1;
      if (S_down.empty()) {
	S_up.push(i);
      } else {
	S_down.pop();
      }
    } else {
      V[i] = 0;
    }
  }
  while (!S_up.empty()) {
    int x = S_up.top();
    S_up.pop();
    V[x] = 0;
  }
  while (!S_down.empty()) {
    int x = S_down.top();
    S_down.pop();
    V[x] = 0;
  }
  for (unsigned int i=1; i<S.size(); i++) {
    V[i] = V[i-1] + V[i];
  }
  for (unsigned int i=1; i<S.size(); i++) {
    if (V[i] == 0 && V[i-1] != 0) {
      ike.push_back(V[i-1]);
    } else {
      V[i] = V[i-1] + V[i];
    }
  }
  int sum = 0;
  for (unsigned int i=0; i<ike.size(); i++) {
    sum += ike[i];
  }
  cout << sum << endl;
  cout << ike.size();
  for (unsigned int i=0; i<ike.size(); i++) {
    cout << " " << ike[i];
  }
  cout << endl;
}