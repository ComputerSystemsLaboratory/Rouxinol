#include <iostream>
#include <cstring>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <time.h>
#include <functional>
#include <cstdio>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define MOD1 1000000007;
#define MOD2 1000007
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
/* ここからが本編 */
/*  */
int dic[20000000];
ull pow(ull x,ull n) {
  ull res = 1;
  while(n > 0) {
    if(n&1) res = res * x;
    x = x * x;
    n >>= 1;
  }
  return res;
}
int dic_op(char str[14],int& key)
{
  int j;
  int f = 1;
  int g = 0;
  for(j = 0;j<10;j++) {
    if(str[j] == 'A')
      g += f * 1;
    else if(str[j] == 'C')
      g += f * 2;
    else if(str[j] == 'G')
      g += f * 3;
    else if(str[j] == 'T')
      g += f * 4;
    else break;
    f *= 5;
  }
  key = 0;
  if(j == 10) {
    f = 1;
    for(;j<10;j++) {
      if(str[j] == 'A')
        key += f * 1;
      else if(str[j] == 'C')
        key += f * 2;
      else if(str[j] == 'G')
        key += f * 3;
      else if(str[j] == 'T')
        key += f * 4;
      else break;
        f *= 5;
    }
  }
  return g;
}
int main()
{
  int i,j,k,l;
  long n;
  long ans = 0;
  char opstr[7];
  char str[13];
  int key;
  int a = 1;
  cin >> n;
  for (i = 0; i < n; i++) {
    scanf("%s %s",opstr,str);
    if(opstr[0] == 'i') {
      int tmp = dic_op(str,key);
      if( (dic[tmp] >> key) % 2 == 0) {
        dic[tmp] += 1 << key;
      }
    }
    else if(opstr[0] == 'f') {
      int tmp = dic_op(str,key);
      /*
      printf("tmp = %d\n",tmp);
      printf("key = %d\n",key);
      printf("dic[tmp] = %d\n",dic[tmp]);
      */
      if( (dic[tmp] >> key) % 2 == 1) {
        puts("yes");
      }
      else {
        puts("no");
      }
    }
  }
  return 0;
}