#include<iostream>
#include<string>
#include<algorithm>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<list>

using namespace std;

int main(void){
  int n,m;
  cin>>n;
  cin>>m;

  vector<int> a(m);
  vector<int> pri(50001,1000000000);

  for(int i=0;i<m;i++){
    cin>>a[i];
    pri[a[i]]=1;
    if(n == a[i]){
      cout << 1 << endl;
      return 0;
    }
  }
  int ans=1;
  int a_max=*max_element(a.begin(),a.end());
  while( 1 ){
    for(int i=0;i<m;i++){

      for(int j=1;j<=ans*(a_max) && j<=50000;j++){
        if(a[i]+j > 50000) break;
        if( pri[j] == ans ){
          //cout << "a[i]:" << a[i] << ", j:" << j << endl;
          if( pri[ a[i]+j ] > 1 + pri[j] ){
            pri[ a[i]+j ] = 1 + pri[j];
          }
          if( a[i]+j == n){
            cout << pri[ a[i]+j ] << endl;
            return 0;
          }
        }


      }

    }
    ans++;
    //cout << ans << endl;
  }



  return 0;
}

