#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
int n,m;
vector <int> rel[100000];
int id[100001];
int visit[100001] = {0};
int s,t;


void check(int x, int u) { 
 visit[x] = 1;
  id[x] = u;

  int v ;
  for(int i=0;i<rel[x].size();i++) {
    v = rel[x][i];
    if(visit[v] == 0) {
      check(v,u);
    }
  }
}
    
  

int main() {

 

  cin >> n >> m;

 
  int a,b;


  for(int i=0;i<m;i++) {


    cin >> a >> b;

    rel[a].push_back(b);
    rel[b].push_back(a);

  }
  
  for(int i =0;i<n;i++) {
    if(visit[i] == 0) {
      check(i,i);
    }
  }
  

  int q;
  cin >> q;
  
  
  
  for(int i=0;i<q;i++) {
    cin >> s >> t;
    
    
    if(id[s] == id[t]) cout << "yes" << endl;
    else cout << "no" << endl;
  }

  return 0;

}