#include <bits/stdc++.h>
using namespace std;

int main(){

  int n,p,i;
  while( cin >> n >> p ){
    if(n==0)break;

    vector<int> V(n);
    int count = 0;

    for(i = 0; i < n; i++){
      if(p == 0){
        p += V[i]; V[i] = 0;
      }
      else if(p != 0){
        p--; V[i]++;
      }

      if(p == 0){
        for(int j = 0; j < n; j++){
          if(V[j] != 0) count++;
        }
      }
      if(count == 1) break;
      //cout << count << " ";
      count = 0;
      if(i == n-1) i = -1;
    }
    cout << i << endl;
  }

	return 0 ;
}

