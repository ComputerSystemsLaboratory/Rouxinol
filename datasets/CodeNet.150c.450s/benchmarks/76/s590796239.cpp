#include <bits/stdc++.h>
using namespace std;
int main(){
  int m;
  cin >> m;
  vector<int> nodes;
  vector<pair<int, int>> child;
  int root = -1;
  for (int i = 0; i < m; i++){
    string q;
    cin >> q;
    if (q == "insert"){
      int k;
      cin >> k;
      if (!nodes.empty()){
        int v = 0;
        while (1){
          if (k < nodes[v]){
            if (child[v].first != -1){
              v = child[v].first;
            } else {
              child[v].first = nodes.size();
              break;
            }
          } else {
            if (child[v].second != -1){
              v = child[v].second;
            } else {
              child[v].second = nodes.size();
              break;
            }
          }
        }
      }
      nodes.push_back(k);
      child.push_back(make_pair(-1, -1));
    }
    if (q == "find"){
      int k;
      cin >> k;
      if (nodes.empty()){
        cout << "no" << endl;
      } else {
        int v = 0;
        while (1){
          if (k < nodes[v]){
            if (child[v].first == -1){
              cout << "no" << endl;
              break;
            } else {
              v = child[v].first;
            }
          } else if (k > nodes[v]){
            if (child[v].second == -1){
              cout << "no" << endl;
              break;
            } else {
              v = child[v].second;
            }
          } else {
            cout << "yes" << endl;
            break;
          }
        }
      }
    }
    if (q == "print"){
      //Inorder
      if (!nodes.empty()){
        stack<int> S;
        vector<int> t(nodes.size(), 0);
        S.push(0);
        while (!S.empty()){
          int v = S.top();
          S.pop();
          if (t[v] == 1){
            cout << ' ' << nodes[v];
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
      }
      cout << endl;
      //Preorder
      if (!nodes.empty()){
        stack<int> S;
        vector<int> t(nodes.size(), 0);
        S.push(0);
        while (!S.empty()){
          int v = S.top();
          S.pop();
          if (t[v] == 0){
            cout << ' ' << nodes[v];
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
      }
      cout << endl;
    }
  }
}
