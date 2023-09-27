#include <iostream>
#include <vector>
using namespace std;

typedef vector<long long> vec;
typedef vector<vec> mat;

mat times(mat& a,mat& b){
  long long n = a.size(), m = a[0].size(), l = b[0].size();
  mat ans(n,vec(l,0));
  for(int i=0; i<n; i++){
    for(int j=0; j<l; j++){

      for(int k=0; k<m; k++){
	ans[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  return ans;
}

int main(){
  long long n,m,l; cin >> n >> m >> l;

  mat a(n,vec(m)), b(m,vec(l));

  for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)  cin >> a[i][j];
  for(int i=0; i<m; i++)
    for(int j=0; j<l; j++)  cin >> b[i][j];

  mat ans = times(a,b);

  for(int i=0; i<n; i++){
    for(int j=0; j<l; j++){
      cout << ans[i][j];
      if(j!=l-1)cout << " ";
      else cout << endl;
    }
  }

}