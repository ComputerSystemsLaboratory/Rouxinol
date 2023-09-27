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
/*-------------------------------*/
 
int main(void)
{
  int a = 0, b = 0, c;
  REP(i, 4){
    cin >> c;
    a += c;
  }
  REP(i, 4){
    cin >> c;
    b += c;
  }
  cout << max(a, b) << endl;
  
  return (0);
}