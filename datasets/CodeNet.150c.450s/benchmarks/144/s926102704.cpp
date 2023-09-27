#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[100][100]={ 0 },b[100][100]={ 0 },n,m,l,s=0;
  long long c[100][100] = { 0 };
  cin >> n >> m >> l;
  for(int i=0;i<n;i++){
    for(int k=0;k<m;k++){
      cin >> a[i][k];
    }
  }
  for(int k=0;k<m;k++){
    for(int j=0;j<l;j++){
      cin >> b[k][j];
    }
  }

  for(int i=0;i<n;i++){
      for(int j=0;j<l;j++){
          for(int k =0;k<m;k++){
              c[i][j] += a[i][k]*b[k][j];
          }
      }
  }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < l; j++){
            if (s == 1){
                cout << " ";
            }
            cout << c[i][j];
            s = 1;
        }
        cout << endl;
        s = 0;
    }
  return 0;
}

