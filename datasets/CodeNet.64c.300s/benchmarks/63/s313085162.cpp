#include <algorithm>
#include <climits>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map> //pair is also included in this library
#include <queue>
#include <stack>
#include <string>
#include <vector>

#define REP(i, s, n) for(int i = (int)(s); i < (int)(n); i++)

using namespace std;

typedef long long int ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef pair<int, int> PII;

//prefer define statement
//for reason that const int ver. of INF will raise a silly warning (unused variable)
#define INF (INT_MAX/3)
#define LIM_INF (INT_MAX)
//const int INF = INT_MAX/3;

/*------------------------------------------------------------------------------*/

int gcd(int a, int b){
  int r = a % b;
  if(r != 0){
    b = gcd(b, r);
  }
  return b;
}

int main(){
  int a, b;

  while(cin >> a >> b){

    int g = gcd(a, b);

    int lcm = a * (b / g);

    cout << g << " " << lcm << endl;
  }

  return 0;
}