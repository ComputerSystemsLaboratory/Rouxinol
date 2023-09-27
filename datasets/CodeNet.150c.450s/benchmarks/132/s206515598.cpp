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
  while(true){
    i32 n,p;cin>>n>>p;
    if(!n&&!p)return 0;
    vector<i32> hold(n,0);
    i32 cup=p;
    int now=0;
    
    while(true){
      if(cup>0){
	hold[now]+=1;
	--cup;
	if(hold[now]==p){
	  cout<<now<<endl;
	  break;
	}
      }
      else{
	cup+=hold[now];
	hold[now]=0;
      }
      if(++now>=n)now=0;
    }

  }
  
  return 0;
}