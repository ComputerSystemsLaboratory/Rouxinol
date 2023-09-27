#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<long> VL;

struct Node {
  int p;
  int left;
  int right;
};
vector<Node> l(30);

void preParse(int i) {
  if (i == -1) return;
  cout << " " << i;
  preParse(l.at(i).left);
  preParse(l.at(i).right);
}

void InParse(int i) {
  if (i == -1) return;
  InParse(l.at(i).left);
  cout << " " << i;
  InParse(l.at(i).right);
}

void PostParse(int i) {
  if (i == -1) return;
  PostParse(l.at(i).left);
  PostParse(l.at(i).right);
  cout << " " << i;
}

int main() {
  int n; cin >> n;
  int top;
  rep(i, n) {
    l.at(i).p = -1;
  }

  rep(i, n) {
    int id; cin >> id;
    int l_tmp; cin >> l_tmp;
    int r_tmp; cin >> r_tmp;
    if (l_tmp != -1) l.at(l_tmp).p = id;
    if (r_tmp != -1) l.at(r_tmp).p = id;
    l.at(id).left = l_tmp;
    l.at(id).right = r_tmp;
  }

  rep(i, n) {
    if (l.at(i).p == -1) top = i;
  }
  cout << "Preorder" << endl;
  preParse(top);
  cout << endl;

  cout << "Inorder" << endl;
  InParse(top);
  cout << endl;

  cout << "Postorder" << endl;
  PostParse(top);
  cout << endl;
}

