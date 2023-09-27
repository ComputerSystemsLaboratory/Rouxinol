#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <algorithm>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(v) v.begin(),v.end()
#define pb push_back

using namespace std;

const int INF = 1000000000;

int main() {
  while(1){
    int h;
    cin>>h;
    if(!h)break;
    vector<vector<int>> t(h,vector<int>(5));
    REP(i,h)REP(j,5)cin>>t[i][j];
    int pt=0;
    while(1){
      bool ch=false;
      REP(i,h){
        int len=1;
        REP(j,4){
          if(t[i][j]==t[i][j+1]){
            len++;
          }else{
            if(len >= 3 && t[i][j]!=0){
              pt+=len*(t[i][j]);
              REP(k,len){
                t[i][j-k]=0;
              }
              ch=true;
            }
            len=1;
          }
        }
        if(len >= 3 && t[i][4]!=0){
          pt+=len*(t[i][4]);
          REP(k,len){
            t[i][4-k]=0;
          }
          ch=true;
        }
      }
      if(!ch)break;
      REP(i,5){
        for(int j=h-1;j>=0;--j){
          for(int k=j+1;k<h;++k){
            if(t[k][i]==0){
              swap(t[k][i],t[k-1][i]);
            }
          }
        }
      }
    }
    cout<<pt<<endl;
  }
  return 0;
}