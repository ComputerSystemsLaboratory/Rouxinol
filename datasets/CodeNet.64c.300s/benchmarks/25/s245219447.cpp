#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<complex>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()
#define EPS (1e-10)
using namespace std;

typedef unsigned int uint;
typedef long long ll;
typedef complex<double> P;

int main(){
  int a[4],b[4];
  while(cin>>a[0]>>a[1]>>a[2]>>a[3]){
    int tmp[10] = {0};
    int hit = 0, blow = 0;
    cin>>b[0]>>b[1]>>b[2]>>b[3];
    REP(i,4){
      tmp[a[i]]++;
      tmp[b[i]]++;
    }
    REP(i,10) if(tmp[i] == 2) blow++;
    REP(i,4) if(a[i]==b[i]) hit++;
    cout << hit << " " << blow - hit << endl;
  }
  return 0;
}