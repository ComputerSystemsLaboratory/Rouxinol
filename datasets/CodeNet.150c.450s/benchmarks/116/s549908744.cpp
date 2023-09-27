#include <iostream>
using namespace std;
int main(){
  int n,m;
  int k[100001];
  while( cin >> n >> m , n+m ){
    int sum = 0;
    for(int i = 0 ; i < n ; i++ )cin >> k[i];
    for(int i = 0 ; i < m ; i++ )sum+=k[i]; 

    int mx = 0;

    for(int i = 0 ; m < n ; m++,i++){
      sum += k[m]-k[i];
      mx = max(mx,sum);
    }
    cout << mx << endl;
  }
  return 0;
}