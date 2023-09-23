#include<bits/stdc++.h>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

int y,m,d;

void input(){
  cin>>y>>m>>d;
}


int days(int y,int m){
  if(y%3==0)return 20;
  if(m%2==1)return 20;
  return 19;
}
int solve(){
  int sum = 1;
  sum += days(y,m)-d;
  m++;
  while(1){
    if(m>10){
      m-=10;
      y++;
    }
    if(y==1000)break;
    sum += days(y,m);
    m++;
  }
  return sum;
}
int main(){
  int n;
  cin>>n;
  rep(i,n){
    input();
    printf("%d\n",solve());
  }
}