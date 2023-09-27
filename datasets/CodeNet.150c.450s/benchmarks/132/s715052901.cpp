#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
//ranker
using namespace std;

#define REPS(i, a, n) for (int i = (a); i < (n); ++i)
#define REP(i, n) REPS(i, 0, n)
#define RREP(i, n) REPS(i, 1, n + 1)
#define DEPS(i, a, n) for (int i = (a); i >= n; --i)
#define DEP(i, n) DEPS(i, n, 0)

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using pii = pair<int, int>;
using pis = pair<int, string>;
using psi = pair<string, int>;
using D = double;


int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
    int n,p,data[50],i,d,result;
    while(1){
      cin >> n >> p;
      d=p;
      if(n==0&&p==0) break;
      for(i=0;i<n;i++) data[i]=0;
      i=0;
      while(1){
        if(p>0){
      p--;
          data[i]++;
      if(data[i]==d){
        result=i;
        break;
      }
        }else if(p==0){
          p=data[i];
          data[i]=0;
        }
        if(i+1==n) i=0;
        else i++;
      }
      cout << result << endl;
    }
    return 0;
  }