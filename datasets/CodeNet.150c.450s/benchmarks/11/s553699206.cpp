

#include <iostream>
using namespace std;
int main() {
  int n,a[4][13],num;
  char marks,mark[4]={'S','H','C','D'};
  cin>>n;
  for (int i = 0; i < 13; i++) {
    for (int j = 0; j < 4 ; j++) {
    a[j][i]=0;
    }
  }
  for (int k = 0; k <n; k++) {
    cin>>marks>>num;
     for (int j = 0; j < 4; j++) {
           if(marks==mark[j]){
           a[j][num-1]=1;
           break;
           }
         }
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 13 ; j++) {
    if(a[i][j]==0)cout<<mark[i]<<" "<<j+1<<endl;
    }
  }
  return 0;
}