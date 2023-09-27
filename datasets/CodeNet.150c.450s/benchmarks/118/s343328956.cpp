#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

using namespace std;

int main(){
  int n;
  cin >> n;
  while(n--){
    int H,N,D;
    cin >> H >> N >> D;
    int hday = 0;
    int mday = 0;
    int total = 0;
    hday = (1000-H+1)/3 * 200 + ((1000-H-1) - (1000-H+1)/3) * 195;
    if(H%3){
      if(N%2){
	mday = 20 * (4-N/2) + 19 * (5-N/2) + 20 - D;
      }else{
	mday = 20 * (5-N/2) + 19 * (5-N/2) + 19 - D;
      }
    }else{
      mday = 20 * (10-N) + 20 - D;
    }
    total = hday + mday + 1 ;
    cout << total << endl;
  }
   
  return 0;
}