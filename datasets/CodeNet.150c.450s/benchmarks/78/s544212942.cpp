#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main (){
  int dp1[1000001];
  int dp2[1000001];
  vector<int> shi;
  vector<int> shiki;

  for(int j=0;j<=1000000;j++) dp1[j] = dp2[j] = j;
    
  for(int i=1;i*(i+1)*(i+2)/6<=1000000;i++){
    shi.push_back(i*(i+1)*(i+2)/6);
    if(shi[i-1]%2 == 1) shiki.push_back(shi[i-1]);
  }

  for(int i=0;i<shi.size();i++)
    for(int j=1;j<=1000000;j++)
      if(j>=shi[i]) dp1[j] = min(dp1[j],dp1[j-shi[i]]+1);

  for(int i=0;i<shiki.size();i++)
    for(int j=1;j<=1000000;j++){
      if(j>=shiki[i]) dp2[j] = min(dp2[j],dp2[j-shiki[i]]+1);
    }


  while(1){
    int n;
    cin >> n;
    if(n==0) break;
    cout << dp1[n]<< " "<< dp2[n] << endl;
  }
  return 0;
}