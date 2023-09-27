#include <bits/stdc++.h>
using namespace std;

int main() {
   int V,E,r;
   cin >> V >> E >> r;
   vector<vector<pair<long long,long long>>> G(V);
   for (int i=0; i<E; i++) {
       long long s,t,d;
       cin >> s >> t >> d;
       G[s].push_back({t,d});
   }
   priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>> q;
   q.push({0,r});
   vector<long long> c;
   c.assign(V,-1);
   while(!q.empty()) {
       pair<long,long> a=q.top();
       q.pop();
       if (c[a.second]==-1) c[a.second]=a.first;
       //cout << a.first << " " << a.second << endl;
       for (auto b:G[a.second]) {
           if (c[b.first]==-1) {
               q.push({a.first+b.second,b.first});
           }
           //cout << b.first << " " << b.second << endl;
       }
   }
   for (int i=0; i<V; i++) {
       if (c[i]==-1) cout << "INF" << endl;
       else cout << c[i] << endl;
   }
}
