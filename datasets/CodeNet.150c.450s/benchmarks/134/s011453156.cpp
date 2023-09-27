#include <bits/stdc++.h>
using namespace std;
#define REP(asd, fgh) for(int asd = 0; asd < fgh; asd++)

int n;

class Node{
  public:
  int p;
  int depth;
  int height;
  int sibling;
  int degree;
  string type;
};

vector<Node> ans;
vector< vector<int> > t;

void dfs(int ind, int prev, int depth, int order){
  if(t[ind].size() == 0 && ans[ind].type != "root"){
    cout << " " << ind;
    return;
  }

  if(order == 0){
    cout << " " << ind;
  }
  if(t[ind][0] != -1)
    dfs(t[ind][0], ind, depth+1, order);
  if(order == 1){
    cout << " " << ind;
  }
  if(t[ind][1] != -1)
    dfs(t[ind][1], ind, depth+1, order);
  if(order == 2){
    cout << " " << ind;
  }

  /*
  for(int i = 0; i < t[ind].size(); i++){
    dfs(t[ind][i], ind, depth+1, order);
  }
  */
  return;
}

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(0);

  cin >> n;
  ans = vector<Node>(n);
  t = vector< vector<int> >(n, vector<int>(0));
  int root;
  REP(i, n){
    int id; cin >> id;
    ans[id].type = "internal node";
    REP(j, 2){
      int c; cin >> c;
      t[id].push_back(c);
    }
  }
  //ans[0].p = -1;
  //ans[0].depth = 0;
  vector<bool> used(n, false);
  for(int i = 0; i < n; i++){
    for(int j = 0; j < t[i].size(); j++){
      if(t[i][j] == -1) continue;
      used[ t[i][j] ] = true;
    }
  }
  for(int i = 0; i < n; i++){
    if(used[i] == false){
      root = i;
      break;
    }
  }

  cout << "Preorder" << endl;
  dfs(root, -1, 0, 0);
  cout << endl;
  cout << "Inorder" << endl;
  dfs(root, -1, 0, 1);
  cout << endl;
  cout << "Postorder" << endl;
  dfs(root, -1, 0, 2);
  cout << endl;

  return 0;
}