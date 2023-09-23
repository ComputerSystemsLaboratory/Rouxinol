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
  int n,sum,ans,left,right;
  while(cin >> n){
    if(!n)break;
    left=1;right=2;ans=0;
    sum = left + right;
    if(n<3){
      cout<<0<<endl;
      continue;
    }
    while(n-1>left){
      if(n==sum)ans++;
      if(sum<=n&&right<n){
	right++;
	sum += right;
      }else if(right-left<2 && right<n){
	right++;
	sum += right;
      }else if(sum>n && right-left>=2){
	sum -= left;
	left++;
      }
    }
    cout << ans << endl;
  }
    return 0;
}