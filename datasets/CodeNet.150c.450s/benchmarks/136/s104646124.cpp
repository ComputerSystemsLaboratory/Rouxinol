#include <iostream>
using namespace std;
typedef long long ll;

//最小公約数
int gcd(ll a,ll b){
    if( a==0 || b==0)
          return 0;
            while(a != b){
                  if(a > b) a= a-b;
                      else b=b-a;
                        }
                          return a;
}

//最小公倍数
int lcm(ll m,ll n){
    if(m==0 || n==0)
          return 0;
            return m/gcd(m,n)*n;
}

int main(){
  ll a,b;
 while( cin >> a>> b){
  cout << gcd(a,b) << " "<<lcm(a,b) << endl;
 }
}