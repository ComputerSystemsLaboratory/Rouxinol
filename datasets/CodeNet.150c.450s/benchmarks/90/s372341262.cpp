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
  int num[110] = {0};
  int max = 0;
  vector<int> maxnum;
  int n;
  while(cin>>n){
    num[n]++;
    if(num[n] > max){
      maxnum.clear();
      maxnum.pb(n);
      max = num[n];
    }else if(num[n] == max){
      maxnum.pb(n);
    }
  }
  sort(all(maxnum));
  rep(i,maxnum.size())cout<<maxnum[i]<<endl;

}