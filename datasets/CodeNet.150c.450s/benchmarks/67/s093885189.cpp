#include<cstdio>
using namespace std;

int main() {
  int n,ans;
  while(1) {
    scanf("%d",&n);
    if(!n) break;
    ans = 0;
    for(int i=3; i<47; i+=2)
      if(n%i==0 && n/i > i/2) {
	ans++;
      }

    for(int i=2; i<47; i+=2) {
      if(n%i!=0 && (n*2)%i==0 && n/i >= i/2) {
	ans++;
      }
    }

    printf("%d\n",ans);
  }
}