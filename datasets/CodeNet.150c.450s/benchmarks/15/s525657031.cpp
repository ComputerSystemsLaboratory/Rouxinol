#include <iostream>
#include <limits.h>
#include <queue>
#include <algorithm>
#include <map>
#include <cstring>
#include <vector>
using namespace std;

typedef long long int ll;
ll S[10001];
ll T[501];
int n,q;

int main(){

  cin>>n;
  for(int i=0;i<n;i++) cin>>S[i];
  cin>>q;
  for(int i=0;i<q;i++) cin>>T[i];

  int cnt = 0;
  for(int i=0;i<q;i++)
    for(int j=0;j<n;j++){
      if(T[i]==S[j]){
	cnt++;
	break;
      }
    }
  cout<<cnt<<endl;
  
 
  return 0;
}