#include <iostream>
using namespace std;
static const int INFTY=(1<<21);

int main() {
  std::ios::sync_with_stdio(false);
  cout.tie(0);
  cin.tie(0);
  int n;
  cin>>n;
  int p[n+1];
  for (int i=1; i<=n; i++) {
    cin>>p[i-1]>>p[i];
  }
  int m[n+1][n+1];
  for (int i=1; i<=n; i++) {
    m[i][i]=0;
  }
  for (int l=2; l<=n; l++) {
    for (int i=1; i<=n-l+1; i++) {
      int j=i+l-1;
      m[i][j]=INFTY;
      for (int k=i; k<=j-1; k++) {
        m[i][j]=min(m[i][j],m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j]);
      }
    }
  }
  cout<<m[1][n]<<endl;
  return 0;
}

