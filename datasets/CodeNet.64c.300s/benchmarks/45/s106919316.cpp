#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
#define INF 100000000
using namespace std;

int main(){
  int n,m,p;


  while( cin >> n >> m >> p,n+m+p ){

    int sum = 0;
    int a[101] = {0};

    for(int i = 0 ; i < n ; i++ ){
      cin >> a[i];
      sum += a[i];
    }
    if(a[m-1] == 0){
      cout << 0 << endl;
      continue;
    }
    sum =sum*(100-p);
    int ans = sum/a[m-1];
    printf("%d\n",ans);
  }
  return 0;
}