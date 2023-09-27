#include <iostream>
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
 
ull pow(ull x,ull n) {
  ull res = 1;
  while(n > 0) {
    if(n&1) res = res * x;
    x = x * x;
    n >>= 1;
  }
  return res;
}
int dic_op(char str[14])
{
  int j;
  long long f = 1;
  long long g = 0;
  for(j = 0;;j++) {
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
  return g; 
}
 
int main()
{
  int i,j,k,l;
  int n;
  long ans = 0;
  static char dic[200000000];
  char opstr[7];
  char str[13];
  cin >> n;
  for (i = 0; i < n; i++) {
    scanf("%s %s",opstr,str);
    if(opstr[0] == 'i') {
      dic[dic_op(str)] = 1;
    }
    else if(opstr[0] == 'f') {
      if(dic[dic_op(str)] == 1)
        puts("yes");
      else
        puts("no");
      j++;
    }
  }
  return 0;
}