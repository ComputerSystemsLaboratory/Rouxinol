#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cassert>
#include <vector>
#include <string>
#include <cmath>
#include <map> 
#include <sstream>
#include <cstdio>
using namespace std;
 
const int MAX= 10000100;

#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define rep(i,a) loop(i,0,a)
#define all(a) (a).begin(),(a).end()
#define ll long long int
#define gcd(a,b) __gcd(a,b)
#define pb(a) push_back(a)
int GCD(int a, int b) {if(!b) return a; return gcd(b, a%b);}
int lcm(int a, int b) {return a*b / gcd(a, b);}

int main(void){
  int n;
  int sa,sb;
  while(cin>>n,n){
  sa = sb = 0;
  while(n--){
    int a,b;
    cin>>a>>b;
    if(a>b){
      sa += a + b;
    }else if(a == b){
      sa += a;
      sb += b;
    }else{
      sb += a + b;
    }
  }

  cout<< sa << " " << sb << endl;
  }
}