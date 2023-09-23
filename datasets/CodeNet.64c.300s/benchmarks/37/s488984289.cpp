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
  while(1){
    cin>>n;
    if(n==0)break;
    int cnt=0;
    for(int i=1;i<n;i++){
      int sum=0;
      for(int j=i;j<n;j++){
	sum+=j;
	if(sum==n){
	  cnt++;
	  break;
	}
	if(sum>n)break;
      }
    }
    cout<<cnt<<endl;
  }
}