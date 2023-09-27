#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e18;
const ll MAX = 25;
const ll NIL = -1;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template<class T> inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}
int ctoi(char c) {
  if (c >= '0' && c <= '9') {
    return c - '0';
  }
  return 0;
}
ll factorial(ll n) {
  if (n == 1) {
    return 1;
  }
  ll ans = factorial(n-1);
  return ans*n;
}
ll gcd(ll a, ll b) {
  if (a < b) {
    ll tmp = a;
    a = b;
    b = tmp;
  }
  ll r = a%b;
  while(r != 0) {
    a = b;
    b = r;
    r = a%b;
  }
  return b;
}
ll lcm(ll a, ll b) {
  return (a/gcd(a, b))*b;
}

struct Node {
  ll parent;
  ll left;
  ll right;
};

vector <Node> t(MAX);

void preParse(ll u) {
  if (u == NIL) {
    return;
  }
  cout << ' ' << u;
  preParse(t.at(u).left);
  preParse(t.at(u).right);
}

void inParse(ll u) {
  if (u == NIL) {
    return;
  }
  inParse(t.at(u).left);
  cout << ' ' << u;
  inParse(t.at(u).right);
}

void postParse(ll u) {
  if (u == NIL) {
    return;
  }
  postParse(t.at(u).left);
  postParse(t.at(u).right);
  cout << ' ' << u;
}

int main() {
  ll n;
  cin >> n;
  rep(i, n) {
    t.at(i).parent = NIL;
    t.at(i).left = NIL;
    t.at(i).right = NIL;
  }
  ll id, l, r;
  rep(i, n) {
    cin >> id >> l >> r;
    t.at(id).left = l;
    t.at(id).right = r;
    if (l != NIL) t.at(l).parent = id;
    if (r != NIL) t.at(r).parent = id;
  }
  ll tmp;
  rep(i, n) {
    if (t.at(i).parent == NIL) tmp = i;
  }
  cout << "Preorder" << endl;
  preParse(tmp);
  cout << endl;
  cout << "Inorder" << endl;
  inParse(tmp);
  cout << endl;
  cout << "Postorder" << endl;
  postParse(tmp);
  cout << endl;
}
