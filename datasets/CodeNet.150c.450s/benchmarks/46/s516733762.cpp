#include<iostream>

using namespace std;

int main(){
  int n,x;

  cin >> n >> x;

  while(n!=0 || x!=0){
    int ans=0;

    for(int i=1;i<=n;i++){
      for(int j=i+1;j<=n;j++){
        for(int k=j+1;k<=n;k++){
          if(i==k || k==j || i==j) continue;
          //cout << i << " " << j << " " << k << endl;
          if(i+j+k==x) ans++;
        }
      }
    }
    cout << ans << endl;
    cin >> n >> x;
  }
  return 0;
}