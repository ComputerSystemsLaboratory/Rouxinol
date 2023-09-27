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
  int n;
  int data[105];
  
  while(true){
    cin>>n;
    if(n==0)break;

    rep(i,0,n)cin>>data[i];
    sort(data,data+n);

    long long sum=0;
    rep(i,1,n-1)sum+=data[i];

    cout<<sum/(n-2)<<endl;
    
  }
  return 0;
}