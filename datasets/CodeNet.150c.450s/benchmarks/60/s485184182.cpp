#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int n,u,k;
  int ad;
  int arr[200][200] = {0};
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    cin >> u >> k;
    for(int i=0;i<k;i++){
      cin >> ad;
      arr[u][ad] = 1;
    }
  }

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cout << arr[i][j];
      if(j != n)cout << " ";
    }
    cout << endl;
  }
  return 0;
}
