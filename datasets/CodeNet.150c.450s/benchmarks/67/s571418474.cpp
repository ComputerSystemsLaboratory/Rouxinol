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
    i32 N;cin>>N;
    if(N==0)break;
    i32 ans=0;
    repeat(i,1,N){
      int sum=0;
      repeat(j,i,N){
	sum+=j;
	if(sum==N){
	  ans+=1;break;
	}
	if(sum>N)break;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}