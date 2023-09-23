#include <iostream>
#include <cassert>
#define REP(i,l,n) for(int i=l;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define MAX 1000000
int ans;
int a,d,n;
bool prime[MAX];
using namespace std;
void era();
int main() {
  while(true){
    era();
    cin >> a >> d >> n;
    if(a==0&&d==0&&n==0) return 0;
    int i;
    for(i = a;n>0;i+=d){
      if(prime[i]) n--;
    }
    cout << i-d << endl;
  }
  return 0;
}

void era(){
  rep(i,MAX) prime[i] = true;
  prime[0] = false;
  prime[1] = false;
  for(int i = 4;i<MAX;i+=2) prime[i] = false;
  rep(i,MAX){
    if(prime[i])
      for(int j = 3*i;j<MAX;j+=2*i){
        prime[j] = false;
      }
  }
}