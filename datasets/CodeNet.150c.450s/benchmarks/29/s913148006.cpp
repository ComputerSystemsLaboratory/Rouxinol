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

int main(int argc, char **argv)
{
  int n;
  list<int> L;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int x;
    char buf[128];
    memset(buf, 0, 128);
    scanf("%s", buf);
    if (strcmp(buf, "insert") == 0) {
      scanf("%d", &x);
      L.push_front(x);
    } else if (strcmp(buf, "delete") == 0) {
      scanf("%d", &x);
      auto k = find(all(L), x);
      if (k != L.end()) L.erase(k);
    } else if (strcmp(buf, "deleteFirst") == 0) {
      L.pop_front();
    } else if (strcmp(buf, "deleteLast") == 0) {
      L.pop_back();
    } else {
      fprintf(stderr, "Unknown command: %s\n", buf);
      return 1;
    }
  }

  const char *sp = "";
  for (auto& x:L) {
    printf("%s%d", sp, x);
    sp = " ";
  }
  putchar('\n');

  return 0;
}