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
  stack<int> stk;
  char str[10];
  while(scanf("%s",str)!=EOF){
    if(isdigit(str[0]))stk.push(atoi(str));
    else{
      int a,b;
      b=stk.top();stk.pop();
      a=stk.top();stk.pop();
      switch(str[0]){
      case '+':
      stk.push(a+b);
      break;
      case '-':
      stk.push(a-b);
      break;
      case '*':
	stk.push(a*b);
	break;
      default:
	puts("swtch");
      }
    }
  }
  cout<<stk.top()<<endl;
  return 0;
}