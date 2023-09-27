#include<bits/stdc++.h>
using namespace std;
int num[101];
int n;
long long int dp[1001][1001];
long long int searcher(int place,int total);
int main(){
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> num[i];
  }
  cout << searcher(1,num[0]) << endl;
}
long long int searcher(int place,int total){
  if(dp[place][total]!=0){
    return dp[place][total];
  }
  else if(place == n-1){
    if(total == num[n-1]){
      return 1;
    }
    else{
      return 0;
    }
  }
  else if(total < 0 || total > 20){
    //cout << total << " ";
    return 0;
  }
  else{
    return dp[place][total] = searcher(place+1,total-num[place]) + searcher(place+1,total+num[place]);
  }
}