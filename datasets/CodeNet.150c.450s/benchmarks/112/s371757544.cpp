#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int n, m, i, j;

  while(true){
    string cb[200];
    string ca[200];
    string out;
    cin >> n;
    if(!n){ break; }
    for(i = 0; i < n; i++){
      cin >> cb[i] >> ca[i];
    }
    cin >> m;
    for(i = 0; i < m; i++){
      string ic;
      cin >> ic;
      for(j = 0; j < n; j++){
        if(ic == cb[j]){
          ic = ca[j];
          break;
	}
      }
      out = out	+ ic;
    }
    cout << out << endl;

  }
  return 0;
}