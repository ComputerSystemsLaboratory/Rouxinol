#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string S;
string a;
string b;

vector<string> V;

int main() {
  int N;
  scanf("%d", &N);
  for (int i=0; i<N; i++) {
    cin >> S;
    V.clear();
    for (unsigned int j=1; j<=S.size()-1; j++) {
      a = S.substr(0, j);
      b = S.substr(j, S.size());
      V.push_back(a+b);
      V.push_back(b+a);
      reverse(a.begin(), a.end());
      V.push_back(a+b);
      V.push_back(b+a);
      reverse(b.begin(), b.end());      
      V.push_back(a+b);
      V.push_back(b+a);
      reverse(a.begin(), a.end());
      V.push_back(a+b);
      V.push_back(b+a);
    }
    sort(V.begin(), V.end());
    int count = 0;
    S = "";
    for (unsigned int i=0; i<V.size(); i++) {
      string T = V[i];
      if (S.compare(T) != 0) {
	count++;
	S = T;
      }
    }
    printf("%d\n", count);
  }
}