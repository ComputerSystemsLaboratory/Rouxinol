#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

#define INT_MAX 1000000000

using namespace std;

int main(){
  int n,m,st,sh,cur;
  pair<int,int> curp;
  while (1){
    cin >> n >> m;
    if (n==0) return 0;
    st=0;sh=0;cur=INT_MAX;curp=make_pair(0,0);
    vector<int> taro(n,0);
    vector<int> hana(m,0);
    for(int i=0;i<n;i++){
      cin >> taro[i];
      st+=taro[i];
    }
    for(int i=0;i<m;i++){
      cin >> hana[i];
      sh+=hana[i];
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(st-2*taro[i]==sh-2*hana[j]){
          if (cur>taro[i]+hana[j]){
            cur = taro[i]+hana[j];
            curp.first=i;
            curp.second=j;
          }
        }
      }
    }
    if (cur==INT_MAX){
      cout << "-1" << endl;
    } else {
      cout << taro[curp.first] << ' ' << hana[curp.second] << endl;
    }
  }
}