#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef long long ll;

ll mod_pow(ll x,ll n,ll mod){
  ll res=1;
  while(n){
    if(n%2) res=res*x%mod;
    x=x*x%mod;
    n/=2;
  }
  return res;
}

bool miller_rabin(int n){
  
  if( n == 2 ) return true;
  
  if( n == 1 || n % 2 == 0 ) return false;
  
  int s = 0, d = n - 1;
  
  random_device rd;
  
  while( d % 2 == 0 ) s++, d /= 2;
  
  int cnt = 10;
  
  while(cnt--){
    
    int a = rd() % ( n - 1 ) + 1;
    
    int t = d;
    
    int y = mod_pow( a, t, n );
    
    while( t != n - 1 && y != 1 && y != n - 1 ){
      y = ( y * y ) % n;
      t *= 2;
    }
    
    if( y != n - 1 && t % 2 == 0 ) return false;
    
  }
  
  return true;
}

int f(int x, int n){
  int c = 5;
  return ( x * x + c ) % n;
}

int pollards_rho(int n){
  
  int y = rand() % ( n + 1 );
  int r = 1, q = 1, m = rand() + 1;

  int g, ys, x;
  
  do{
    
    x = y;
    
    for(int i=1;i<=r;i++) y = f( y, n );
    
    int k = 0;
    
    do{
      
      ys = y;
      
      for(int i=1;i<=min( m, r - k );i++){
	y = f( y, n );
	q = ( q * abs( x - y ) ) % n;
      }
      
      g = __gcd( q, n );
      k = k + m;
      
    }
    while( k < r && g <= 1 );
    
    r = 2 * r;
    
  }
  while( g <= 1 );
  
  if( g == n ){
    
    do{
      ys = f( ys, n );
      g = __gcd( abs( x - ys ), n );
    }
    while( g <= 1 );
    
  }
    
  return g;
}

vector<int> factorial(int n){
  
  vector<int> res;
  
  while( miller_rabin(n) == false ){
    
    int r = pollards_rho(n);
    
    if( 1 < r && r < n && miller_rabin(r) == true ){
      res.push_back( r );
      n /= r;
    }
    
  }
  
  if( n != 1 ) res.push_back( n );
  
  sort( res.begin(), res.end() );
  
  return res;
}

signed main(){
  
  int n;
  cin>>n;
    
  vector<int> ans = factorial(n);

  cout<<n<<": ";
    
  for(int i=0;i<(int)ans.size();i++){
    if(i) cout<<' ';
    cout<<ans[i];
  }
    
  cout<<endl;
  
  return 0;
}

