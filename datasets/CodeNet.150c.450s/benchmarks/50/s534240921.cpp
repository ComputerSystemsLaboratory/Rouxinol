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
  int i,j;
  int n;
  while(1){
    cin>>n;
    if(n==0)break;
    n=1000-n;
    int ans=0;
    while(n>=500){
      ans++;
      n-=500;
    }
    while(n>=100){
      ans++;
      n-=100;
    }
    while(n>=50){
      ans++;
      n-=50;
    }
    while(n>=10){
      ans++;
      n-=10;
    }
    while(n>=5){
      ans++;
      n-=5;
    }
    while(n){
      ans++;
      n--;
    }
    cout<<ans<<endl;
  }
}