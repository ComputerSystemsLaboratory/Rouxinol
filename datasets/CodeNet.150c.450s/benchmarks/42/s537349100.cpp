#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<string>
#include<cmath>
#include<cstdint>
//#include<>
using namespace std;

typedef int64_t i64;typedef int32_t i32;
typedef int16_t i16;typedef int8_t i8;
typedef uint64_t ui64;typedef uint32_t ui32;
typedef uint16_t ui16;typedef uint8_t ui8;

typedef i32 int__;
#define rep(i,j) for(int__ i=0;i<j;i++)
#define repeat(i,j,k) for(int__ i=(j);i<(k);i++)
#define repeat_eq(i,j,k) for(int__ i=(j);i<=(k);i++)
#define all(v) begin(v),end(v)

const i32 INF=1<<30;//=10E10

int main()
{
  int n,q;cin>>n>>q;
  typedef pair<string,int>psi;
  queue<psi> que;
  int atime=0;
  rep(i,n){
    psi t;
    cin>>t.first>>t.second;
    t.second-=q;
    atime+=q;
    if(t.second>0)
      que.push(t);
    else{
      atime+=t.second;
      cout<<t.first<<" "<<atime<<endl;
    }
  }
  while(!que.empty()){
    psi t=que.front();que.pop();
    t.second-=q;
    atime+=q;
    if(t.second>0)
      que.push(t);
    else{
      atime+=t.second;
      cout<<t.first<<" "<<atime<<endl;
    }
  }
  return 0;
}