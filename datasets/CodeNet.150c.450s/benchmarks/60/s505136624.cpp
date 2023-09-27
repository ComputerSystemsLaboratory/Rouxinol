#include<bits/stdc++.h>
using namespace std;
#define ll long long 




int main(){ 
      
      int n; cin >> n;
      vector<vector<int>> a(n,vector<int>(n,0));
      for(int i=0;i<n;i++){
            int u,k; cin >> u >> k;
            if(k==0) continue;
            for(int j=0;j<k;j++){
                  int v; cin >> v;
                  a[u-1][v-1] = 1;
            }
      }

      for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                  cout << a[i][j] ;
                  if(j!=n-1){
                        cout<<" ";
                  }
                  
            }
            cout << endl;

      }
}
