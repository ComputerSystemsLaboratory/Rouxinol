#include<bits/stdc++.h>
using namespace std;

int N;
int ans[1111];
int main(){
  for(int i=1;i<=1000;i++){
    int sum = i;
    for(int j=i+1;j<=1000;j++){
      sum += j;
      if( sum > 1000 ) break;
      ans[sum]++;
    }
  }
  while( cin >>N && N ){
    cout << ans[N] << endl;
  }
}