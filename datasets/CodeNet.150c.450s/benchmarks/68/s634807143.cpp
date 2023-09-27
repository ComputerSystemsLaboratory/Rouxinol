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

int a[10000000];

int main(){
  int n;
  while(1){
    cin>>n;
    int mini=INF;
    if(n==0)break;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
      mini=min(mini,a[i+1]-a[i]);
    }
    cout<<mini<<endl;
  }
  return 0;
}