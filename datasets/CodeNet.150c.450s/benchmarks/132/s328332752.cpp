#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<climits>
#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<list>
#include<map>
#include<set>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define max_n 53
#define max_p 53
int n,p,stone;
int score[max_n];
bool input(){
  cin>>n>>p;
  return (n!=0);
}

void solve(){ 
  REP(i,max_n)score[i]=0;
  stone=p;
  int person =0;
  while(true){
    if(stone>0){
      stone--;
      score[person]+=1;
      if(score[person]==p)break;
  }else{
    stone=score[person];
    score[person]=0;
  }
  person++;
  person%=n;
  }
  cout<<person<<endl;
}

int main(){
  while(input()){
    solve();
  }
  return 0;
}