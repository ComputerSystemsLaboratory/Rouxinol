#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n,q;
  vector<int> S,T;

  cin >> n;
  for(int i=0;i<n;i++) {
    int s;
    cin >> s;
    S.push_back(s);
  }
  cin >> q;
  for(int i=0;i<q;i++) {
    int t;
    cin >> t;
    T.push_back(t);
  }

  // O(n^2)
  int C = 0;
  for(int t_itr=0;t_itr<q;t_itr++) {
    int key = T[t_itr];
    for(int s_itr=0;s_itr<n;s_itr++) {
      if(S[s_itr] == key) {
        C++;
        break;
      }
    }
  }

  cout << C << endl;
}