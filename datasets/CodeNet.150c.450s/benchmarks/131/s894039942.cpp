#include <bits/stdc++.h>
#define REP(a,b,c) for(int a=b; a<(int)c; a++)
#define REPE(a,b,c) for(int a=b; a<=(int)c; a++)
#define REPD(a,b,c) for(int a=b; a>=(int)c; a--)
#define rep(a,b) REP(a,0,b)
#define repd(a,b) REPD(a,b,0)
typedef long long int ll;
using namespace std;

int main(){
  while(true){
    int a,L;
    cin >> a >> L;
    if(a==0 && L==0) break;
    map<int, int> n_map;
    int cnt = 0;
    while(true){
      if(n_map.find(a) != n_map.end()) break;
      n_map[a] = cnt++;
      vector<int> list;
      rep(i,L){
        list.push_back(a%10);
        a /= 10;
      }
      sort(list.begin(),list.end());
      int max_num = 0, min_num = 0;
      rep(i,L){
        max_num *= 10;
        max_num += list[L-i-1];
        min_num *= 10;
        min_num += list[i];
      }
      a = max_num - min_num;
    }
    cout << n_map[a] << " " << a << " "<< cnt-n_map[a] << endl;
  }
  return 0;
}