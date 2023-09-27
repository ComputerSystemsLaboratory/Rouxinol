#include<iostream>
#include<string>
#include<cmath>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<complex>
using namespace std ;
typedef vector<int> vi ;
typedef vector<vi> vvi ;
typedef vector<string> vs ;
typedef pair<int, int> pii; 
typedef long long ll ;

#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define rep(i,a) loop(i,0,a)
#define all(a) (a).begin(),(a).end()
#define EPS 1e-9

int main(void){
  int a,b,c,d,e,f;
  float x,y,dx,dy;
  while(cin >> a >> b >> c >> d >> e >> f){
    x = (c*e-b*f) / (float)(a*e-b*d);
    y = (c - a*x) / (float)b;
    printf("%.3f %.3f\n",x+EPS,y+EPS);
  }
}