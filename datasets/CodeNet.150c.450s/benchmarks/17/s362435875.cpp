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
  vi a;
  int b;
  FOR(i, 0, 5){
    cin >> b;
    a.push_back(b);
  }
  sort(all(a));
  reverse(all(a));
  FOR(i, 0, 5){
    if (i < 4){
      cout << a[i] << " ";
    }
    else{
      cout << a[i] << endl;
    }
  }
  return 0;
}