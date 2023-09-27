#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define dbg(x) cout<<#x"="<<x<<endl

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;

#define INF 1000000000

//decode num
int dc(char *n){
  int idx=0;
  int res=0;

  int sz=strlen(n);
  while(idx<sz){
    int current=1;
    if(n[idx]>='2' && n[idx]<='9'){
      current = n[idx] - '0';
      idx++;
    }
    switch(n[idx]){
    case 'm': current*=1000; break;
    case 'c': current*=100; break;
    case 'x': current*=10; break;
    }
    idx++;
    res+=current;
  }
  return res;
}

int main(){
  int n;
  cin >> n;

  while(n-->0){
    char n1[10], n2[10];
    scanf("%s %s", n1, n2);

    int num= dc(n1)+dc(n2);
    string res;

    rep(i,4){
      int k[]={1000,100,10,1};
      string c[]={"m","c","x","i"};
      if(num>=2*k[i]){
	res += (num/k[i]+'0');
	  res += c[i];
	num%=k[i];
      }
      else if(num>=k[i]){
	res += c[i];
	num%=k[i];
      }
    }
    cout << res<<endl;
  }
}