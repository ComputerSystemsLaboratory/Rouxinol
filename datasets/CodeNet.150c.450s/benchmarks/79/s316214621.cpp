#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <cctype>
#define rep(i,a,b) for(int i=(a);i<b;i++)
#define INF 1000000000
using namespace std;
bool debug=false;

int main(){
  int n,r;
  while(1){
    cin>>n>>r;
    if(n==0&&r==0)break;
    int d[51];
    //?????????
    for(int i=0;i<n;i++){
      d[i]=n-i;
    }

    if(debug)for(int i=0;i<n;i++)cout<<d[i]<<" ";
    if(debug)cout<<endl;
      
    for(int i=0;i<r;i++){
      int p,c,tmp[51];
      cin>>p>>c;
      
      for(int j=0;j<c;j++)tmp[j]=d[j+p-1];

      for(int j=p-2;j>=0;j--)d[j+c]=d[j];

      for(int j=0;j<c;j++)d[j]=tmp[j];

      
      if(debug)for(int i=0;i<n;i++)cout<<d[i]<<" ";
      if(debug)cout<<endl;
    }
    cout<<d[0]<<endl;
  }
  return 0;
}