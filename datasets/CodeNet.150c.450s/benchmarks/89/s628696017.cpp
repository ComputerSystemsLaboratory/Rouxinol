#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1000000;
bool prime[N+1];
int main(){
  for(int i=2;i<=N;++i) prime[i] = true;
  for(int i=2;i<=N;++i) if(prime[i]) for(int j=2;i*j<=N;++j) prime[i*j] = false;
  int a,d,n;
  while(cin>>a>>d>>n,a||d||n){
    int cnt = 0;
    while(true){
      if(prime[a]) ++cnt;
      if(cnt>=n) break;
      a+=d;
    }
    cout << a << endl;
  }
  return 0;
}