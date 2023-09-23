#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <ctime>
#define INF 2000000000
#define LINF 9000000000000000000
#define mod 1000000007
 
#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=(n);i>=0;i--)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define mp make_pair
#define MOD(x) (x%(mod))
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

bool debug=false;
/*---------------------------------------------------*/

int main(){
  int n,a,b;
  int a_score,b_score;

  while(1){
    scanf("%d",&n);
    if(n==0)break;
    a_score=b_score=0;
    rep(i,n){
      scanf("%d%d",&a,&b);
      if(a==b){
	a_score+=a;
	b_score+=b;
      }else if(a>b){
	a_score+=a+b;
      }else if(a<b){
	b_score+=a+b;
      }
    }
    printf("%d %d\n",a_score,b_score);
  }
}