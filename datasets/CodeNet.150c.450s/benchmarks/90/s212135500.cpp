#include <bits/stdc++.h>

using namespace std;

/*-------------------------------*/
#define FOR(i, a, b) for(int i = (a); i < (b); i++)  //a~(b - 1)?????§
#define print(i) cout << i << endl //?°??????????Python?????????
#define all(i) (i).begin(),(i).end() //??¨??????(sort??¨???)
#define mp make_pair //mp(OO, OO)??¨???:::pint??¨???

typedef long long ll;
typedef pair<int, int> pint;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef vector<long long> llv;
typedef vector<pint> vpint;
/*-------------------------------*/

int main(void)
{
  int a[101] = {};
  int mx = 0;
  int x;

  while (scanf("%d", &x) != EOF){
    a[x]++;
    if (mx < a[x]) mx = a[x];
  }
  FOR(i, 1, 101){
    if (a[i] == mx){
      cout << i << endl;
    }
  }
  return 0; 
}