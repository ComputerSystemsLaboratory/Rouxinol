#include<iostream>
using namespace std;
int main()
{
  int a[4];
  int sum[2]={};
  int i;
  for(i=0;i<4;i++){
    cin >> a[i];
    sum[0]+=a[i];
  }
  for(i=0;i<4;i++){
    cin >> a[i];
    sum[1]+=a[i];
  }
  if(sum[0]>sum[1]) cout << sum[0] << endl;
  else cout << sum[1] << endl;
  return 0;
}