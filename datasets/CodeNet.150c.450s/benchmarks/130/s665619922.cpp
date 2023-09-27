#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vec;
typedef vector<vec> mat;

vec times(mat& a,vec& b){
  int n = a.size(), m = b.size();
  vec ans(n,0);
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      ans[i] += a[i][j] * b[j];
    }
  }
  return ans;
}

int main(){
  int n,m; cin >> n >> m;

  vec b(m);
  mat a(n,vec(m));
  for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)  cin >> a[i][j];
  for(int j=0; j<m; j++)  cin >> b[j];

  vec ans = times(a,b);
  for(int i=0; i<n; i++){
    cout << ans[i] << endl;
  }

}