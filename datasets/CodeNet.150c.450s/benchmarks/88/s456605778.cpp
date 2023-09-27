#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<cstring>
#include<cctype>
#include<complex>
#include<iostream>
#include<sstream>
#include<algorithm>
#include<functional>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<bitset>
#include<numeric>
using namespace std;
const int dx[]={1,0,-1,0};
const int dy[]={0,1,0,-1};
#define INF 1e+8
#define EPS 1e-7
#define PB push_back
#define fi first
#define se second
#define ll long long
#define reps(i,j,k) for(int i = (j); i < (k); i++)
#define rep(i,j) reps(i,0,j)
typedef pair<int,int> Pii;
typedef vector<int> vi;

int main(){
   int h,w;
   while(scanf("%d%d",&h,&w),w){
      int nh = 10000;
      int nw = 10000;
      reps(i,1,151){
         reps(j,i+1,151){
            if(i*i+j*j >= h*h+w*w && nh*nh+nw*nw > i*i+j*j){
               if(i*i+j*j == h*h+w*w && i <= h)continue;
               nh = i;
               nw = j;
            }
            else if(i*i+j*j >= h*h+w*w && nh*nh+nw*nw == i*i+j*j && nh > i){
               nh = i;
               nw = j;
            }
         }
      }
      printf("%d %d\n",nh,nw);
   }
   return 0;
}