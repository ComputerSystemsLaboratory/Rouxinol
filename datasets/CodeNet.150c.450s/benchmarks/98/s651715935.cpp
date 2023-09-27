#include<iostream>
#include<cstring>
using namespace std;

int main(void){
  int n,m;
  int i,j;
  int sn[101],sm[101];
  int s;
  while(true){
    cin >> n >> m;
    if(n == 0) break;
    memset(sn,0,sizeof(sn));
    memset(sm,0,sizeof(sm));
    s = 0;
    for(i = 0;i < n;i++){
      cin >> j;
      s += j;
      sn[j]++;
    }
    for(i = 0;i < m;i++){
      cin >> j;
      s -= j;
      sm[j]++;
    }
if(s%2) s = 100000;
s /= 2;
    for(i = 0;i < 101;i++){
      if(sn[i] && i-s >= 0 && i-s <= 100){
	if(sm[i-s]){
	  cout << i << " " << i-s << endl;
	  break;
	}
      }
      if(i == 100) cout << -1 << endl;
    }
  }
}