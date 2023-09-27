#include <iostream>
#include <climits>
#define MAX 101
#define INF LLONG_MAX
using namespace std;

//the minimum matrix chain multiplication of M_i...M_j
long long m[MAX][MAX];
//M_i is p[i-1]*p[i]
long long p[MAX];

int main(){
  int n; cin >> n;
  cin >> p[0];
  for(int i=1;i<=n-1;i++){
    cin >> p[i];
    int x; cin >> x;
  }
  cin >> p[n];
  for(int i=1;i<=n;i++) m[i][i]=0;
  for(int l=2;l<=n;l++){
    for(int i=1;i<=n-l+1;i++){
      int j=i+l-1;
      m[i][j]=INF;
      //find the minimum of M_i...M_j
      for(int k=i;k<=j-1;k++){
        m[i][j]=min(m[i][j],m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j]);
      }
    }
  }
  cout << m[1][n] << endl;
}