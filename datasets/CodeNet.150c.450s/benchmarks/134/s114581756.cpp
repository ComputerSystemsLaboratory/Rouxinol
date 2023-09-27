#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector< pair<int, int> > child(n);
  for (int i = 0; i < n; i++){
    int id, left, right;
    cin >> id >> left >> right;
    child[id] = make_pair(left, right);
  }
  vector<int> parent(n, -1);
  for (int i = 0; i < n; i++){
    if (child[i].first != -1){
      parent[child[i].first] = i;
    }
    if (child[i].second != -1){
      parent[child[i].second] = i;
    }
  }
  int root;
  for (int i = 0; i < n; i++){
    if (parent[i] == -1){
      root = i;
      break;
    }
  }
  vector<int> t(n);
  stack<int> S;
  cout << "Preorder" << endl;
  for (int i = 0; i < n; i++){
    t[i] = 0;
  }
  S.push(root);
  while (!S.empty()){
    int v = S.top();
    S.pop();
    if (t[v] == 0){
      cout << ' ' << v;
    }
    if (t[v] == 0){
      S.push(v);
      if (child[v].second != -1){
        S.push(child[v].second);
      }
      S.push(v);
      if (child[v].first != -1){
        S.push(child[v].first);
      }
    }
    t[v]++;
  }
  cout << endl;
  cout << "Inorder" << endl;
  for (int i = 0; i < n; i++){
    t[i] = 0;
  }
  S.push(root);
  while (!S.empty()){
    int v = S.top();
    S.pop();
    if (t[v] == 1){
      cout << ' ' << v;
    }
    if (t[v] == 0){
      S.push(v);
      if (child[v].second != -1){
        S.push(child[v].second);
      }
      S.push(v);
      if (child[v].first != -1){
        S.push(child[v].first);
      }
    }
    t[v]++;
  }
  cout << endl;
  cout << "Postorder" << endl;
  for (int i = 0; i < n; i++){
    t[i] = 0;
  }
  S.push(root);
  while (!S.empty()){
    int v = S.top();
    S.pop();
    if (t[v] == 2){
      cout << ' ' << v;
    }
    if (t[v] == 0){
      S.push(v);
      if (child[v].second != -1){
        S.push(child[v].second);
      }
      S.push(v);
      if (child[v].first != -1){
        S.push(child[v].first);
      }
    }
    t[v]++;
  }
  cout << endl;
}
