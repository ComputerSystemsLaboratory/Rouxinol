#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   for(int i=0;i<(n);++i)
#define SORT(c)    sort((c).begin(),(c).end())
#define CLR(a)     memset((&a), 0 ,sizeof(a))//clear memory
#define dump(x)    cerr << #x << " = " << (x) << endl;//debug
#define debug(x)   cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define EPS        1e-10//sample:if((double)>=(double)+EPS)
//cin,cout release
//std::cin.tie(0);
//ios::sync_with_stdio(false);
int m[101][101];
int p[101];
int l=0,n;
void matrixchainorder(){

  for(int i=1;i<=n;i++)m[i][i]=0;
  for(int l=2;l<=n;l++){
    for(int i=1;i<=n-l+1;i++){
      int j=i+l-1;
      m[i][j]=INT_MAX;
      for(int k=i;k<=j-1;k++){
	m[i][j]=min(m[i][j],m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j]);
      }
    }
  }
}


int main(){

  int temp;
  cin>>n;
  rep(i,n+1)rep(j,n+1)m[i][j]=INT_MAX;
  for(int i=1;i<=n;i++)cin>>p[i-1]>>temp;
  p[n]=temp;
  matrixchainorder();
  cout<<m[1][n]<<endl;
  return 0;
}
