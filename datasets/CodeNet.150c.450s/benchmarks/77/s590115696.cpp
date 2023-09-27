#include <bits/stdc++.h>

typedef long long LL;

//container util
//------------------------------------------
#define PB push_back
#define MP make_pair
#define DECIM(digits)  cout<<fixed<<setprecision(digits)
#define SZ(a) int((a).size())
#define SORT(c) sort((c).begin(),(c).end())

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI  = acos(-1.0);

//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))

using namespace std;
int main(void)
{
  for(;;){
    int n;
    cin >> n;
    if(!n) return 0;
    vector<pair<int,int> >gem;
    gem.resize(n);
    REP(i,n){
      int x,y;
      cin >> x >> y;
      gem[i]=MP(x,y);
    }
    int m;
    cin >> m;
    pair<int,int> pos=MP(10,10);
    REP(i,m){
      string news;
      int amount;
      cin >> news >> amount;
      while(amount--){
	if(news=="N")
	  pos.second++;
	if(news=="E")
	  pos.first++;
	if(news=="W")
	  pos.first--;
	if(news=="S")
	  pos.second--;
	for(auto j=gem.begin();j!=gem.end();)
	  if(pos==*j) j=gem.erase(j);
	  else ++j;
      }
    }
    if(gem.empty()) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}