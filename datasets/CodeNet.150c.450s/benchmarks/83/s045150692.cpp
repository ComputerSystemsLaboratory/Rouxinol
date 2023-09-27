#include<iostream>
#include<string>
#include<algorithm>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<list>

using namespace std;

int n,w;
vector< vector<int> > dp(101, vector<int>(10001,-1) );
vector<pair<int,int> > c(0);

int search(int i,int j){
  if( dp[i][j]> -1 ) return dp[i][j];
  int ans;
  if(i==n){
    ans=0;
  }
  else if( c[i].second > j ){
    ans = search(i+1,j);
  }
  else{
    ans = max(search(i+1,j) , search(i+1,j-c[i].second)+c[i].first );
  }
  dp[i][j]=ans;
  return ans;
}

int main(void){

  cin>>n;
  cin>>w;

  for(int i=0;i<n;i++){
    int x,y;
    cin>>x;
    cin>>y;
    c.push_back(make_pair(x,y));
  }

  cout << search(0,w) << endl;


  return 0;
}

