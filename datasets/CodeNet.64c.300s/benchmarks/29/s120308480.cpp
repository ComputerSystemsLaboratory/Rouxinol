#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cassert>
#include <vector>
#include <string>
#include <cmath>
#include <map> 
using namespace std;
 
const int MAX= 10000100;

#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define rep(i,a) loop(i,0,a)
#define all(a) (a).begin(),(a).end()
#define ll long long int
#define gcd(a,b) __gcd(a,b)

int GCD(int a, int b) {if(!b) return a; return gcd(b, a%b);}
int lcm(int a, int b) {return a*b / gcd(a, b);}

int main(void){
  int n ;
  while(cin>>n,n){
    int ans = n;
    for(int i = 0 ; i*i*i <= n ; i ++){
      int  j = sqrt(n - i*i*i);
      if(n < i*i*i + j*j)
	continue;
      ans = min(ans,i+j+(n-i*i*i-j*j));
    }
    cout<<ans<<endl;
  }
}