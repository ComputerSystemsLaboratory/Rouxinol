 #include <iostream>
  #include <complex>
  #include <vector>
  #include <string>
  #include <algorithm>
  #include <cstdio>
  #include <numeric>
  #include <cstring>
  #include <ctime>
  #include <cstdlib>
  #include <set>
  #include <map>
  #include <unordered_map>
  #include <unordered_set>
  #include <list>
  #include <cmath>
  #include <bitset>
  #include <cassert>
  #include <queue>
  #include <stack>
  #include <deque>
 #include <iomanip>
 
  using namespace std;
   

//abcdefghijklmnopqrstuvwxyz
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
  typedef long long ll;
  typedef long double lld;
//   typedef string str;
//   typedef unsigned long long ull;
//   ll INF = INT_MAX;
  // ll mod = 998244353;
  lld PI = 3.141592653;

// const int N = 2e5 + 5;

// int a[N];
// int n,k;
  



 


vector<vector<int> > a;
vector<int> b;
queue<int> q;
vector<bool> visited;



  int main()
  {
      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     

   int n,m;
   cin>>n>>m;
   a = vector<vector<int> > (n+1);
   b = vector<int > (n+1);
   visited = vector<bool> (n+1);
   while (m--){
    int x,y;
    cin>>x>>y;
    a[x].push_back(y);
    a[y].push_back(x);
   }
   q.push(1);
   visited[1] = true;

   while (!q.empty()){
    int v = q.front();
    q.pop();
    for (int i = 0;i<a[v].size();i++){
      int u = a[v][i];
      if (!visited[u]){
        q.push(u);
        visited[u] = true;
        b[u] = v;
      }
    }
   }
   bool ok =true;
   for (int i = 2;i<=n;i++){
    if (b[i]==0) ok = false;
   }
   if (ok){
    cout<<"Yes\n";
    for (int i = 2;i<=n;i++){
    cout<<b[i]<<"\n";
   }

   }else{
    cout<<"No\n";
   }
   
   
   

}
  