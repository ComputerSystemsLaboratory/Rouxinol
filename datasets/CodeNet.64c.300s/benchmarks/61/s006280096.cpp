#include<iostream>

using namespace std;

int main(){
  int r,c;
  int a[150][150];
  int r_sum[150]={0};
  int c_sum[150]={0};
  int t_sum=0;

  cin >> r >> c;

  int i,j;
  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
      cin >> a[i][j];

  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
      r_sum[i]+=a[i][j];

  for(i=0;i<c;i++)
    for(j=0;j<r;j++)
      c_sum[i]+=a[j][i];

  for(i=0;i<r;i++)
    t_sum+=r_sum[i];

  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      cout << a[i][j] << " ";
    }
    cout << r_sum[i] << endl;
  }

  for(i=0;i<c;i++)
    cout << c_sum[i] << " ";
  cout << t_sum << endl;
}