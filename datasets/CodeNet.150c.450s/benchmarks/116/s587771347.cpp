#include<iostream>
using namespace std;

int main(){
  int n,k,data[100000],sum,max;
  while(1){
    cin >> n >> k;
    sum = 0;
    max = -10000000;
    if(n == 0&&k == 0)break;
    for(int i = 0; i < n;i++)
      cin >> data[i];
    for(int i = 0;i < k;i++)
      sum += data[i];
    if(sum > max) max = sum;
    for(int i = 0; i < n-k;i++){
      sum = sum-data[i]+data[i+k];

      if(sum > max)
        max = sum;
    }
    cout << max <<endl;
  }
  return 0;
}