#include <iostream>
#include <queue>
#include <cstdio>
#include <vector>
using namespace std;

int n;
void make_group(vector<int> &group, vector< vector<int> > &g) {
  bool visited[n];
  for(int i=0;i<n;i++) visited[i] = false;
  queue<int> que;
  int count = 1;
  for(int s=0;s<n;s++) {
    if(!visited[s]) {
      visited[s] = true;
      que.push(s);
      while(!que.empty()) {
        int v = que.front(); que.pop();
        group[v] = count;
        for(int i=0;i<g[v].size();i++) {
          if(!visited[g[v][i]]) {
            visited[g[v][i]] = true;
            que.push(g[v][i]);
          }
        }
      }
    }
    count++;
  }
}

int main() {
  int m,s,t,q;
  scanf("%d %d\n",&n,&m);
  vector< vector<int> > g(n);
  vector<int> group(n,0);
  for(int i=0;i<m;i++) {
    scanf("%d %d",&s,&t);
    g[s].push_back(t);
    g[t].push_back(s);
  }

  make_group(group,g);
  // cout << group << endl;
  /*
  for(int i=0;i<n;i++) {
    printf("%d:%d\n",i,group[i]);
  }
  */

  scanf("%d",&q);
  for(int i=0;i<q;i++) {
    scanf("%d %d",&s,&t);
    if(group[s] == group[t]){
      printf("yes\n");
    }
    else {
      printf("no\n");
    }
  }
}