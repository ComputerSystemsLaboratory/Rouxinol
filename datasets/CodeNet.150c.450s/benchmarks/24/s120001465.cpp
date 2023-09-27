#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;

int main(){
  int N, M;
  pair<int, int> a[10000];

  while(cin >> N >> M && N > 0){

    rep(i, N){
      cin >> a[i].second >> a[i].first;
    }



    sort(a, a+N);
    reverse(a, a+N);


    int ans = 0;

    rep(i, N){
      if(M >= a[i].second){
        M = M - a[i].second;
      } else {
        ans += a[i].first * (a[i].second - M);
        M = 0;
      }
    }

    cout << ans << endl;

  }
}
