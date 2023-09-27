#include <iostream>
using namespace std;
 
#define N 500000
typedef long long LLI;

int main(void){
  int n;
  int cnt[10010];
  
  for (int i=0; i<=10000; i++) cnt[i]=0;
  cin >> n;
  for (int i=0; i<n; i++){
    int t;
    cin >> t;
    cnt[t]++;
  }
  for (int i=0; i<=10000; i++){
    while (cnt[i]--){
      cout << i;
      cout << (--n?" ":"\n");
    }
  }
  return 0;
}
