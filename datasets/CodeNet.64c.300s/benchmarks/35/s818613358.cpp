#include<iostream>
#include<cstdio>

using namespace std;

int main(){
  int n;
  cin >> n;
  int i;
  int a[150][150];
  int x,y;
  for (x = 0; x < n; x++) {
    for (y = 0; y < n; y++) {
      a[x][y]=0;
    }
  }

  for (i = 0; i < n; i++) {
    int l;
    cin >> l;
    int k;
    cin >> k;
    int j;
    for (j = 0; j < k; j++) {
      int m=0;
      cin >> m;
      a[l-1][m-1]=1;
    }

  }

  for (x = 0; x < n; x++) {
    for (y = 0; y < n; y++) {
      printf("%d",a[x][y]);
      if(y!=n-1){
        printf(" ");
      }
    }printf("\n");
  }

  return 0;
}