#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;
   vector<vector<int>> G(n+1);
   for (int i=0; i<n; i++) {
       int u,k;
       cin >> u >> k;
       for (int j=0; j<k; j++) {
           int v;
           cin >> v;
           G[u].push_back(v);
       }
   }
   vector<int> c(n+1,-1);
   queue<int> q;
   q.push(1);
   c[1]=0;
   while(!q.empty()) {
       int a=q.front();
       q.pop();
       for (auto b:G[a]){
           if (c[b]==-1) {
           q.push(b);c[b]=true;c[b]=c[a]+1;
           }
       }
   }
   for (int i=0; i<n; i++) {
       cout << i+1 << " " << c[i+1] << endl;
   }
}
