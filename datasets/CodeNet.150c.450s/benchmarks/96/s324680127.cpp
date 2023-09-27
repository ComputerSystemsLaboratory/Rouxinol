#include <bits/stdc++.h>

typedef long long LL;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define DECIM8  fixed<<setprecision(8) 
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
  string lib[10]={"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  int t;
  cin >> t;
  for(;t--;){
    string input;
    cin >> input;
    char last='0';
    int ren=0;
    REP(i,SZ(input)){
      if(input[i]==last) ++ren;
      else{
	if(last-'0')
	  cout << lib[last-'0'][ren%SZ(lib[last-'0'])];
	ren=0;
      }
      last=input[i];
    }
    cout << endl;
  }
  return 0;
}