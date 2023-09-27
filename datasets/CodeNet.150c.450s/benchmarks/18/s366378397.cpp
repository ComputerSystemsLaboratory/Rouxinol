#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <cctype>
using namespace std;

int main(){
  int n,ans=100000;
  cin>>n;
  for(int i=0;i<n;i++){
    ans*=1.05;
    ans=(ans+999)/1000*1000;
  }
  cout<<ans<<endl;
}