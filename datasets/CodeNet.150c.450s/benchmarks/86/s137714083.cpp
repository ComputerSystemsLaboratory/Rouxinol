#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <cctype>
#include <cstdlib>
#define rep(i,a,b) for(int i=(a);i<b;i++)
#define INF 1000000000
using namespace std;
bool debug=false;

int main(){
  int n,m,p;

  while(1){
    cin>>n>>m>>p;
    if(n==0&&m==0&&p==0)break;

    int sum=0,point;

    for(int i=1;i<=n;i++){
      int x;
      cin>>x;
      sum+=x;
      if(i==m)point=x;
    }
    int per=(100-p);
    sum=sum*per;
    if(debug)cout<<"sum:"<<sum<<" "<<"point:"<<point<<"   "<<"per:"<<per<<endl;
    if(point==0)cout<<0<<endl;
    else cout<<sum/point<<endl;
  }

  return 0;  
}