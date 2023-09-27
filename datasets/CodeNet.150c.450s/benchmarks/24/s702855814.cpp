#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<cmath>
#define rep(i, n) for(int i=0; i<n; i++)
#define rrep(i, n) for(int i=n-1; i>=0; i--)
#define FOR(i, a, b) for(int i=a; i<b; i++)
#define rFOR(i, a, b) for(int i=b-1; i>=a; i--)
#define MAX 10000
using namespace std;

struct distance{
  int d;
  int p;
/*
  bool operator<(const distance& left, const distance& right){
    return left.p == right.p ? left.d < right.d : left.p < left.p;
  }

*/
};


int main(void){
  while(true){
    int n, m; cin >> n >> m;
    if(n+m == 0)  break;
    int ans = 0;
    vector<struct distance> inns;
    rep(i, n){
      struct distance inn;
      cin >> inn.d >> inn.p;
      inns.push_back(inn);
    }
  //  sort(inns.begin(), inn.end());

    int i,j;
    struct distance tmp;
    for(i=0;i<n;i++){
      for(j=i;j<n;j++){
        if(inns[i].p>inns[j].p){
          tmp=inns[i];
          inns[i]=inns[j];
          inns[j]=tmp;
        }
      }
    }

    rrep(i, n){
      if(m > 0){
        if(m >= inns[i].d){
          m -= inns[i].d;
        }else{
          ans += ((inns[i].d - m)*inns[i].p);
          m = 0;
        }
      }else{
        ans += inns[i].d*inns[i].p;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
