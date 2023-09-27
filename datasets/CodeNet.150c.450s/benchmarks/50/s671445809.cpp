#include <bits/stdc++.h>

using namespace std;

/*-------------------------------*/
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define RFOR(i, a, b) for(int i = (b) - 1; i >= (a); i--)
#define REP(i, n) for(int i = 0; i < (n); i++)
#define RREP(i, n) for(int i = (n) - 1; i >= 0; i--)
#define all(i) (i).begin(),(i).end()
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pint;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef vector<long long> llv;
typedef vector<pint> vpint;

int gcd(int a, int b){return b?gcd(b, a % b):a;}
/*-------------------------------*/

int main(void)
{
  int list[6] = {500, 100, 50, 10, 5, 1};
  int n;
  int cnt;

  while (true){
    cin >> n;
    if (n == 0) break;
    n = 1000 - n;
    cnt = 0;
    REP(i, 6){
      if (i % 2 == 0){
        if (n - list[i] >= 0){
          cnt++;
          n -= list[i];
        }
      }
      else{
        if (n / list[i] != 0){
          cnt += n / list[i];
          n -= (n / list[i]) * list[i];
        }
      }
    }
    cout << cnt << endl;
  }
}