#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main(void){
 
  int n,m,in,sumt,sumh;
  vector<int>taro,hanako;
 
  while(cin >> n >> m,n|m){
    taro.clear();
    hanako.clear();
 
    sumt=0;
    sumh=0;
 
    for(int i=0;i<n;i++){
      cin >> in;
      sumt+=in;
      taro.push_back(in);
    }
     
    for(int i=0;i<m;i++){
      cin >> in;
      sumh+=in;
      hanako.push_back(in);
    }
 
    int Min=10000000,anst,ansh;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
    if(sumt-taro[i]+hanako[j]==sumh+taro[i]-hanako[j]){
      if(Min>taro[i]+hanako[j]){
        Min=taro[i]+hanako[j];
        anst=taro[i];
        ansh=hanako[j];
      }
    }
      }
    }
     
    if(Min==10000000)cout << -1 << endl;
    else cout << anst << " " << ansh << endl;
  }
 
  return 0;
}