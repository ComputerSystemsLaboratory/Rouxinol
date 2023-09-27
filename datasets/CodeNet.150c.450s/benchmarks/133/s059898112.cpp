#include<queue>
#include<stack>
#include<math.h>
#include<cmath>
#include<bitset>
#include<stdio.h>
#include<string>
#include<map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<utility>
#include<functional>
#include<deque>
#include<ctime>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
unsigned int randxor()
{
    static unsigned int x=123456789,y=362436069,z=521288629,w=88675123;
    unsigned int t;
    t=(x^(x<<11));x=y;y=z;z=w; return( w=(w^(w>>19))^(t^(t>>8)) );
}
int d=365;
vector<int> ans(d);
vector<int> ans1(d);
vector<int> c(26);
vector<vector<int> > s(d);
int score;
void keisan(){
  int cost=0,i,j;
  vector<int> x(26,-1);
  for(i=0;i<d;i++){
    cost+=s[i][ans1[i]];
    x[ans1[i]]=i;
    for(j=0;j<26;j++){
      cost=cost-c[j]*(i-x[j]);
    }
    printf("%d\n",cost);
  }
}
int main(){
  int i,j;
  int ti=clock();
  scanf("%d\n",&d);
  for(i=0;i<26;i++){
    scanf("%d",&c[i]);
  }
  for(i=0;i<d;i++){
    for(j=0;j<26;j++){
      int a;
      scanf("%d",&a);
      s[i].push_back(a);
    }
  }
  for(i=0;i<d;i++){
    scanf("%d\n",&ans1[i]);
    ans1[i]--;
  }
  keisan();
  return 0;
}