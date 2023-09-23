#include<iostream>
using namespace std;

int main(){
  int n,m;

  cin >> n >> m;

  int ar1[100][100];
  int *ar2 = new int[m];
  
  for(int i = 0; i<n ; ++i){
    for(int k = 0; k<m ; ++k){
      cin >> ar1[i][k];
    }
  }

  for(int i = 0; i<m ; ++i){
    cin >> ar2[i];
  }

  int ans=0;
  for(int i = 0; i<n ; ++i){
      for(int l = 0; l<m; ++l){
	ans += ar1[i][l]*ar2[l];
      }

      cout << ans << endl;
      ans = 0;
  }


  delete[] ar2;

  return 0;
}

