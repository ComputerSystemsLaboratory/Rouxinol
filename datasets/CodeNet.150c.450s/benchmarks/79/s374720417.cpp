#include <bits/stdc++.h>
using namespace std;

int main(){

  while(1){

    int n, p, c, r, yamahuda[51] = {0}, ue[51] = {0}, shita[51] = {0}, cnt = 1;

    cin >> n >> r;
    if(n == 0 && r == 0) break;

    for(int i = n; i >= 1; i--){
      yamahuda[n-i+1] = i;
    }

    for(int i = 1; i <= r; i++){
      cin >> p >> c;
      for(int j = 1; j < p; j++){
	ue[j] = yamahuda[j];
	//cout << ue[j];
      }
      //cout << endl;
      cnt = 1;
      for(int s = p; s < p+c; s++){
	shita[cnt] = yamahuda[s];
	//	cout << shita[cnt];
	//cout << cnt;
	cnt++;
      }
      //cout << endl;
      // cnt = 1;
      for(int l = 1; l < cnt; l++){
	yamahuda[l] = shita[l];
	//	cout << shita[l];
      }
      //  cout << endl;
      
      for(int m = 1; m < p; m++){
	yamahuda[cnt] = ue[m];
	cnt++;
      }
      // for(int k = 1; k <= n; k++) cout << yamahuda[k];
      //cout << endl;
    }
     cout << yamahuda[1] << endl;
   
    
  }

  return 0;
} 