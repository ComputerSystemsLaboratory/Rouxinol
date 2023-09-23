#include <iostream>
#include <cstdio>
#include <cmath>
#include <climits>
using namespace std;

int main(){
  int r,c;
  cin>>r>>c;
  int m[r][c];
  int sum_col[c];
  int sum_row;

  for(int j=0;j<c;j++){
      sum_col[j] = 0;
  }

  int tmp;
  for(int i=0;i<r;i++){
    sum_row=0;
    for(int j=0;j<c;j++){
      cin>>tmp;
      sum_col[j]+=tmp;
      sum_row+=tmp;
      cout<<tmp<<' ';
    }
    cout<<sum_row<<endl;
  }
  sum_row=0;
  for(int i=0;i<c;i++){
    cout<<sum_col[i]<<' ';
    sum_row+=sum_col[i];
  }
  cout<<sum_row<<endl;
  return 0;
}