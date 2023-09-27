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
  int n,m;
  while(cin>>n>>m,n+m){
    string in;
    rep(i,n)in = (char)(i) + in;
    //rep(i,n)cout<<int(in[i]+1)<<endl;
    rep(i,m){
      int a,b;
      cin>>a>>b;
      in = in.substr(a-1,b)+in.substr(0,a-1)+in.substr(a+b-1);
    }
    cout<<int(in[0]+1)<<endl;
  }
  
}