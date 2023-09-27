#include<iostream>
#include<string>
#include<map>
#include<queue>
#include<vector>
#include<set>
#include<list>
#include<cstring>
#include<cctype>
#include<cmath>
#include<bitset>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0;i < (n);++i)

int main(){
    int n,m;
    cin >> n >> m;

    vector<vector<int>> v(n+1);
    int a[m],b[m];
    rep(i,m){
        cin >> a[i] >> b[i];
        a[i]--;b[i]--;
        v[a[i]].push_back(b[i]);
        v[b[i]].push_back(a[i]);
    }

    vector<int> c(n+1,0);

    queue<int>que;
    que.push(0);
  	vector<bool> g(n+1,false);  
  
    while(!que.empty()){
        int p = que.front();
        que.pop();

        for(auto u : v[p]){
            if(g[u] == true)continue;
          	c[u] = p + 1;
            que.push(u);
          	g[u] = true;
        }
    }
  	
  	cout << "Yes" << endl;
   	for(int i = 1;i < n;i++)cout << c[i] << endl;
}
