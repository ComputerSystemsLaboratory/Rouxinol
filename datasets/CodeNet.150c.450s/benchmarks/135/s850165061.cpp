#include <iostream>
#include <set>
#include <map>

using namespace std;

int main() {
  while(1) {
    int N, M;
    cin >> N >> M;
    if(N == 0 && M == 0) break;
    int H[N], W[M];
    for(int i = 0; i < N; i++) {
      cin >> H[i];
    }
    for(int i = 0; i < M; i++) {
      cin >> W[i];
    }

    set<int> v1, v2;
    map<int, int> m1, m2;
    for(int i = 0; i < N; i++) {
      int bfr = 0;
      for(int j = i; j < N; j++) {
	int temp;
	temp = bfr + H[j];
	bfr = temp;
	v1.insert(temp);
	m1[temp]++;
      }
    }
    for(int i = 0; i < M; i++) {
      int bfr = 0;
      for(int j = i; j < M; j++) {
	int temp;
	temp = bfr + W[j];
	bfr = temp;
	v2.insert(temp);
	m2[temp]++;
      }
    }

    int cnt = 0;
    set<int>::iterator it1 = v1.begin();
    while(it1 != v1.end()) {
      set<int>::iterator it2;
      it2 = v2.find(*it1);
      if(it2 != v2.end()) cnt += m1[*it1]*m2[*it2];
      it1++;
    }
    cout << cnt << endl;
  }
  return 0;
}