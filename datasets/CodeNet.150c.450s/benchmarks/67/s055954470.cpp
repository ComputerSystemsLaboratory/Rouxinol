#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int ans[1111]={0};
  for(int i=1;i<1001;i++){
    int sum = i;
    for(int j=i+1;j<1001;j++){
      sum += j;
      if(sum > 1000) break;
      ans[sum]++;
    }
  }
  while(cin >> n , n){
    cout << ans[n] << endl;
  } 
}