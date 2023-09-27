#include <iostream>
using namespace std;
int h[1500001] = {},w[1500001] = {};

int main() {
  
  while(1) {
    
    int n,m;
    cin >> n >> m;
    if(n == 0 && m == 0) break;
  
    int th[1500],tw[1500];
    int sum = 0;
    int L = 0;
  
    for(int i=0;i<n;i++) cin >> th[i] ,sum+= th[i];
    for(int j=0;j<m;j++) cin >> tw[j], L += tw[j];
    if(L < sum) L = sum;
  
    for(int i=0;i<n;i++) {
      int haba=0;
      for(int j=i;j<n;j++) {
	h[haba+th[j]]++;
	//cout << haba+th[j] << endl;
	haba+=th[j];
      }
    }
  
    for(int i=0;i<m;i++) {
      int haba=0;
      for(int j=i;j<m;j++) {
	w[haba+tw[j]]++;
	//cout << haba+tw[j] << endl;
	haba+=tw[j];
      }
    }

    int ans = 0;
    for(int i=1;i<=L;i++) ans += h[i]*w[i];
  
    cout << ans << endl;

    for(int i=1;i<=L;i++) h[i] = 0, w[i] =0;

  }
  
  return 0;
  
}