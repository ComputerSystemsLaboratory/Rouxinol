#define dbg(...) fprintf(stderr,__VA_ARGS__)
#define dpr(x) cerr<<#x<<": "<<x<<endl;
#define dprc(c) do{cerr<<#c<<":";for(auto&_i:(c)){cerr<<" "<<_i;}cerr<<endl;}while(0)
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
int INF = 1e9+7;
#define all(c) begin(c), end(c)
#define tr(i,c) for(auto i=begin(c);i!=end(c);i++)
#define rtr(i,c) for(auto i=(c).rbegin();i!=(c).rend();i++)
#define rep(i,b) for(auto i=0;i<(b);i++)
#define pb push_back
#define sz(c) int((c).size())

struct card {
  char suit, value;
  int pos;
};

typedef vector<card> vc;

void bubbleSort(vc& C, int N) {
  for (int i = 0; i < N; i++) {
    for (int j = N-1; j > i; j--) {
      if (C[j].value < C[j-1].value) swap(C[j], C[j-1]);
    }
  }
}

void selectionSort(vc& C, int N) {
  for (int i = 0; i < N; i++) {
    int minj = i;
    for (int j = i; j < N; j++) {
      if (C[j].value < C[minj].value) minj = j;
    }
    if (i != minj) swap(C[i], C[minj]);
  }
}

void dump(vc& C) {
  bool stable = true;
  string sp = "";
  for (int i = 0; i < sz(C); i++) {
    cout << sp << C[i].suit << C[i].value;
    sp = " ";
    if (i > 0
        && C[i-1].value == C[i].value
        && C[i-1].pos > C[i].pos) {
      stable = false;
    }
  }
  cout << endl;
  cout << (stable ? "Stable" : "Not stable") << endl;
}
int main(int argc, char **argv)
{
  int N;
  cin >> N;
  vc C(N);
  int i = 0;
  for (auto& c:C) {
    string s;
    cin >> s;
    c.suit = s[0];
    c.value = s[1];
    c.pos = i++;
  }

  vc C1(C), C2(C);
  bubbleSort(C1, N);
  selectionSort(C2, N);

  dump(C1);
  dump(C2);

  return 0;
}