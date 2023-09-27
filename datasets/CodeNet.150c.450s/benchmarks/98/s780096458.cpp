#include <iostream>

using namespace std;

int main(){
  int n,m;
  while(cin >> n >> m ,n||m){
    int i,j,tarosum = 0,hanasum = 0;
    int taro[n],hana[m],tans=-1,hans=-1,sum=0;
    for(i=0;i<n;i++){
      cin >> taro[i];
      tarosum += taro[i];
    }
    for(i=0;i<m;i++){
      cin >> hana[i];
      hanasum += hana[i];
    }
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
        if(tarosum-taro[i]+hana[j] == hanasum-hana[j]+taro[i]){
          if(tans==-1){
            tans = taro[i];
            hans = hana[j];
            sum = tans + hans;
            continue;
          }
          if(taro[i]+hana[j]<sum){
            tans = taro[i];
            hans = hana[j];
          }
        }
      }
    }
    if(tans<0)cout << -1 << endl;
    else cout << tans << " " << hans << endl;
  }
  return 0;
}

