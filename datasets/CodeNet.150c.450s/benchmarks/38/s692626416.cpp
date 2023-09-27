#include <bits/stdc++.h>

using namespace std;

/*-------------------------------*/
#define FOR(i, a, b) for(int i = (a); i < (b); i++)  //a~(b - 1)?????§
#define print(i) cout << i << endl //?°??????????Python?????????

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
/*-------------------------------*/

int main(void)
{
  int a;
  int da[3];
  cin >> a;

  FOR(i, 0, a){
    cin >> da[0] >> da[1] >> da[2];
    sort(da, da + 3);
    if (da[0] * da[0] + da[1] * da[1] == da[2] * da[2]) print("YES");
    else print("NO");
  }

  return 0;
}