//include
#include<bits/stdc++.h>

//using
using namespace std;


//define static const typedef
#define FOR(i, s, n) for(int i = s; i < int(n); i++)
#define REP(i, n) FOR((i), 0, (n))
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SORT(a) sort(ALL(a))
#define RSORT(a) sort(RALL(a))
#define DUMP(x) cerr << #x << " = " << x << "\n";
#define DEBUG(x) cerr << #x << " = " << x << " (L:" << __LINE__ << ") " << __FILE__ << "\n";
#define F first
#define S second

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef vector<PII> VPII;
typedef long long LL;
typedef vector<LL> VLL;
typedef vector<VLL> VVLL;
typedef unsigned long long ULL;

static const int INF = 1 << 25;
static const int movex[] = {0,0,1,-1};
static const int movey[] = {1,-1,0,0};
//global
static int a, b, c, ans, hp = 1;
static VS mp;
static int sx = INF, sy = INF;
static string str = "";
static char inp[1000];
static vector<VVI> ar;
static queue<pair<int, PII > >  n;
//function
int main(){
  scanf("%d %d %d", &a, &b, &c);
  REP(i, b + 2){
    str = str + "X";
  }
  mp.PB(str);
  REP(i, a){
    scanf("%s", inp);
    mp.PB(inp);
    mp[i + 1] = "X" + mp[i + 1] + "X";
    REP(j, mp[i + 1].size()){
      if(sx != INF){
	break;
      }
      if(mp[i + 1][j] == 'S'){
	sy = i + 1;
	sx = j;
	break;
      }
    }
  }
  ar.resize(c, VVI(a + 2, VI(b + 2)));
  REP(i, c){
    REP(j, a + 2){
      REP(k, b + 2){
	ar[i][j][k] = INF;
	if(!i && sy == j && sx == k){
	  ar[0][j][k] = 0;
	}
      }
    }
  }
  mp.PB(str);
  n.push(pair<int, PII>(hp, PII(sy, sx)));

  while(!n.empty()){
    if(n.front().F != hp){
      n.pop();
      continue;
    }
    if(hp == mp[n.front().S.F][n.front().S.S] - '0'){
      hp++;
      if(hp > c){
	ans = ar[c - 1][n.front().S.F][n.front().S.S];
	break;
      }
      ar[hp - 1][n.front().S.F][n.front().S.S] = ar[hp - 2][n.front().S.F][n.front().S.S];
    }
    int nowy = n.front().S.F, nowx = n.front().S.S;
    n.pop();
    REP(i, 4){
      if(mp[nowy + movey[i]][nowx + movex[i]] != 'X' && ar[hp - 1][nowy + movey[i]][nowx + movex[i]] > ar[hp - 1][nowy][nowx] + 1){
	ar[hp - 1][nowy + movey[i]][nowx + movex[i]] = ar[hp - 1][nowy][nowx] + 1;
	n.push(pair<int, PII>(hp, PII(nowy + movey[i], nowx + movex[i])));
      }
    }
  }
  printf("%d\n",ans);
  return 0;
}