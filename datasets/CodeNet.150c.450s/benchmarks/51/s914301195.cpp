#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<string>
#include<string.h>
#include<stack>
#include<queue>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<stdlib.h>
#include<iomanip>
 
using namespace std;
 
#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 1e9
#define rep(i,n) for(i=0;i<n;i++)
#define loop(i,a,n) for(i=a;i<n;i++)
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)
 
typedef vector<int> vi;
typedef pair<int,int> pii;
 
int main(void) {
  int i;
  vi num(31,0);
  rep(i,28){
    int n;
    cin>>n;
    num[n]++;
  }
  loop(i,1,31)
    if(num[i]==0)
      cout<<i<<endl;

}