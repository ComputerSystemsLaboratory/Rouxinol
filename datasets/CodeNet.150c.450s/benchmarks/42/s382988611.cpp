#define dbg(...) fprintf(stderr,__VA_ARGS__)
#define dpr(x) cerr<<#x<<": "<<x<<endl;
#define dprc(c) do{cerr<<#c<<":";for(auto&_i:(c)){cerr<<" "<<_i;}cerr<<endl;}while(0)
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
int INF = 1e9+7;
#define all(c) (c).begin(), (c).end()
#define tr(i,c) for(auto i=(c).begin();i!=(c).end();i++)
#define rtr(i,c) for(auto i=(c).rbegin();i!=(c).rend();i++)
#define rep(i,b) for(auto i=0;i<(b);i++)
#define pb push_back
#define sz(c) int((c).size())

struct task {
  string name;
  int time;
};

#define MAX_N (100100)
task tq[MAX_N];
int head, tail;

int size() {
  if (tail >= head) return tail - head;
  else return MAX_N - (head - tail);
}

bool empty() {
  return size() == 0;
}

bool full() {
  return size() == MAX_N - 1;
}

void push(const task& t) {
  if (full()) {
    cerr << "Stack is full" << endl;
    exit(1);
  }
  tq[tail] = t;
  tail = (tail+1)%MAX_N;
}

task pop() {
  if (empty()) {
    cerr << "Stack is empty" << endl;
    exit(1);
  }
  task& res = tq[head];
  head = (head+1)%MAX_N;
  return res;
}

int main(int argc, char **argv)
{
  int n, q;
  cin >> n >> q;
  for (int i = 0; i < n; i++) {
    task t;
    cin >> t.name >> t.time;
    push(t);
  }

  int elapsed = 0;
  while (!empty()) {
    task t = pop();
    if (t.time <= q) {
      elapsed += t.time;
      cout << t.name << " " << elapsed << endl;
    } else {
      elapsed += q;
      t.time -= q;
      push(t);
    }
  }

  return 0;
}