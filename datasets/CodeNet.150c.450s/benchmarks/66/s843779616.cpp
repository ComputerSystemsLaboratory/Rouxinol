#include <bits/stdc++.h>
using namespace std;

int main(){

  string str[256], man;
  int n, m, judge;

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> str[i];
  }

  cin >> m;

  for(int i = 0; i < m; i++){
    cin >> man;
    for(int j = 0; j < n; j++){
      if(str[j] == man){
	if(judge == 0){
	  cout << "Opened by " << man << endl;
	  judge = 1;
	  break;
	}else {
	  cout << "Closed by " << man << endl;
	  judge = 0;
	  break;
	}
      }else if(j == n - 1) cout << "Unknown " << man << endl;
    }
  }

  return 0;
}