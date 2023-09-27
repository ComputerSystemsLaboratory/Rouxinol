#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;
int main(){
  int n,m;
  while(1){
    cin >> n >> m;
    if(n == 0 && m == 0) break;
    int sumt = 0,sumh = 0;
    int t[111],h[111];
    for(int i=0;i<n;i++){
      cin >> t[i];
      sumt += t[i];
    }
    for(int i=0;i<m;i++){
      cin >> h[i];
      sumh += h[i];
    }
    int minn = 100000;
    int anst=-1,ansh=-1;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
	int nt = sumt - t[i] + h[j];
	int nh = sumh + t[i] - h[j];
	if(nt == nh && minn > t[i] + h[j]){
	  anst = t[i];
	  ansh = h[j];
	  minn = t[i] + h[j];
	}
      }
    }
    if(anst == -1 && ansh == -1) cout << "-1" << endl;
    else cout << anst << " " << ansh << endl;
  }
}