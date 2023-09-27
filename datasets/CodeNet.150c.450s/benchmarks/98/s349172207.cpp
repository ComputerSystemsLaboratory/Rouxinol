#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  while(1){
    int n,m;
    cin >> n >> m;
    if(n==0&&m==0)break;
    vector<int> a,b;
    int a_sum=0,b_sum=0;
    for(int i=0;i<n;i++){
      int I;
      cin >> I;
      a.push_back(I);
      a_sum+=I;
    }
    for(int i=0;i<m;i++){
      int I;
      cin >> I;
      b.push_back(I);
      b_sum+=I;
    }
    int sum=1000;
    pair<int,int> mem;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(a_sum-a[i]+b[j]==b_sum-b[j]+a[i]){
          if(min(sum,a[i]+b[j])!=sum){
            mem.first=a[i];
            mem.second=b[j];
            sum=a[i]+b[j];
          }
        }
      }
    }
    if(sum==1000){
      cout << -1 << endl;
    }else{
      cout << mem.first << " "<< mem.second << endl;
    }
  }
}

