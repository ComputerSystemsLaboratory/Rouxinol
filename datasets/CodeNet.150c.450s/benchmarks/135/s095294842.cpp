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
  //  cin.tie(0);
  //  ios::sync_with_stdio(false);
  int n,m;
  while(cin>>n>>m,n){
    int nsize = n*(n+1)/2;
    int msize = m*(m+1)/2;
    vector<int> rrr(nsize);
    vector<int> ccc(msize);
    int tmp;


    int k = n;
    REP(i,n){
      cin >> tmp;
      rrr[i] = tmp;
      int wa = tmp;
      for(int j = i-1;j>=0;j--){
	wa += rrr[j];
	rrr[k] = wa;
	k++;
      }
    }
    k = m;
    REP(i,m){
      cin >> tmp;
      ccc[i] = tmp;
      int wa = tmp;
      for(int j = i-1;j>=0;j--){
	wa += ccc[j];
	ccc[k] = wa;
	k++;
      }
    }
    sort(rrr.begin(),rrr.end());
    sort(ccc.begin(),ccc.end());
    rrr.push_back(-1);ccc.push_back(-1);
    int ri = 0, ci = 0;
    int ans = 0;
    int cct = 1, rct = 1;
    
    bool is_r = true, is_c = true;
    while(true){
      while(is_r && rrr[ri] == rrr[ri+1]){
	rct++;
	ri++;
      }
      while(is_c && ccc[ci] == ccc[ci+1]){
	cct++;
	ci++;
      }
      if(rrr[ri] == ccc[ci]){
	ans += rct * cct;
	//	cout << rrr[ri] << " " << ccc[ci] << endl;
	is_c = true;
	is_r = true;
	rct = 1;
	cct = 1;
	ri++;
	ci++;
      }
      else if(rrr[ri] > ccc[ci]){
	ci++;
	is_c = true;
	is_r = false;
	cct = 1;
      }else{
	ri++;
	is_r = true;
	is_c = false;
	rct = 1;
      }
      if(ri > nsize-1 || ci > msize-1)break;
    }
    cout << ans << "\n";
  }
  return 0;
}