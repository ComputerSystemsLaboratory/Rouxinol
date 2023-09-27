#include<iostream>
#include<cstdio>
#include<algorithm>
#define nMAX 10000
#define aMAX 1000000
using namespace std;

int main(void)
{
  int n,a[nMAX];
  long maxv,minv,sum;

  do{
    cin >> n;
  }while(n <= 0 || n > nMAX);

  while(1){
    int flag = 1;
    for(int i = 0;i < n;i++){
      cin >> a[i];
      if(a[i] > aMAX || a[i] < -1 * aMAX) flag = 0;
    }
    if( flag == 1) break;
  }
  
  maxv = -1 * aMAX;
  minv = a[0];

  for(int i = 0;i < n;i++){
    maxv = max(maxv,(long)a[i]);
    minv = min(minv,(long)a[i]);
    sum += a[i];
  }

  cout << minv << " " << maxv << " " << sum << endl;
  
  return 0;
} 
    