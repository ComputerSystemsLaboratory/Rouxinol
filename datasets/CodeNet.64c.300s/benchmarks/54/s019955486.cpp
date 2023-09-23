#include<bits/stdc++.h>
using namespace std;

int n;
int num[102];
long long int memo[22][200];
int ans;

long long int solve( int now,int cnt){
  //if(cnt == n-1 )cout<<now<<endl;
  if(now < 0 || now > 20)return 0;
  if(memo[now][cnt] != -1)return memo[now][cnt];
  if(cnt == n-1 && ans == now)return 1;
  if(cnt == n-1 && ans != now)return 0;
  return memo[now][cnt] = solve(now + num[cnt] ,cnt + 1) + solve(now - num[cnt],cnt + 1);
}
int main(){
  cin>>n;
  memset(memo,-1,sizeof(memo));
  for(int i = 0;i < n;i++){
    cin >> num[i];
  }
  ans = num[n-1];
  cout << solve(num[0],1) << endl;
}