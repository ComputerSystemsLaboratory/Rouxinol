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
int MAX_N = 1000001;
int main(){
  
  vector<int> prime(MAX_N,1);
  prime[0]=0;prime[1]=0;
  for(int i = 2;i*i<MAX_N;i++){
    if(prime[i])
      for(int j = 2*i;j<MAX_N;j++){
	if(prime[j] && j%i == 0)prime[j] = 0;
      }
  }
  int a,n,d;
  while(cin>>a>>d>>n){
    if(!a&&!d&&!n)break;
    int ct = 0;
    REP(i,MAX_N){
      if(prime[a+(i)*d])
	ct++;
      if(ct==n){
	cout << a+(i)*d << endl;
	break;
      }
    }
  }     
  return 0;
}