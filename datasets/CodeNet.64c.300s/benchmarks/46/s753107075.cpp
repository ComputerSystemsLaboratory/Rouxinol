#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> VI;
typedef vector<VI> VVI;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = numeric_limits<int>::max() / 2;
const int NEG_INF = numeric_limits<int>::min() / 2;

/*bool is_prime(int n){
  bool res=true;
  if(n==1) return false;
  for(int i=2;i*i<=n;i++){
    if(n%i==0) res=false;
  }
  return res;
}*/

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  bool prime[2000000];
  prime[1]=false;
  for(int i=2;i<=1000000;i++){
    prime[i]=true;
  }
  for(int i=2;i*i<1000001;i++){
    if(prime[i]){
      for(int j=2;i*j<1000001;j++){
        prime[i*j] = false;
      }
    }
  }

  while(true){
    int a,d,n;
    cin >> a >> d >> n;
    if(n==0) break;
    int count=0,idx=0;
    while(count<n){
      if(prime[a+d*idx]) count++;
      idx++;
    }
    cout << a+d*(idx-1) << endl;
  }
}