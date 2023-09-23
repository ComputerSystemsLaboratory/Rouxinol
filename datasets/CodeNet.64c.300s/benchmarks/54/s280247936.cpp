#include <iostream>
using namespace std;
int a[102];
long long memo[102][22];
int n;
long long ans;
long long count;

void saiki(int kai,int sum) {
  count++;
  int flg = 0;
  if(kai == n-1 && sum == a[n-1]) ans++,memo[kai][sum]++;
  else if(kai == n-1 && sum != a[n-1]) memo[kai][sum] = -1;
  
  
  if(kai < n-1) {
    if(sum+a[kai]<=20 && memo[kai+1][sum+a[kai]] == 0) {
      saiki(kai+1,sum+a[kai]);
      if(memo[kai+1][sum+a[kai]]>0) memo[kai][sum]+=memo[kai+1][sum+a[kai]]; 
    else flg++;
    } else if(sum+a[kai]<=20 && memo[kai+1][sum+a[kai]] > 0) {
      ans += memo[kai+1][sum+a[kai]];
      memo[kai][sum] += memo[kai+1][sum+a[kai]];
    }
    
    
    if(0<=sum-a[kai] && memo[kai+1][sum-a[kai]] == 0) {
      saiki(kai+1,sum-a[kai]);
      if(memo[kai+1][sum-a[kai]]>0) memo[kai][sum]+= memo[kai+1][sum-a[kai]]; 
      else flg++;
    }
    else if(0<=sum-a[kai] && memo[kai+1][sum-a[kai]] > 0) {
      ans+= memo[kai+1][sum-a[kai]];
      memo[kai][sum] += memo[kai+1][sum-a[kai]];
    }
    if(flg == 2) memo[kai][sum] = -1; 
  }
} 

int main() {
  cin >> n;
  for(int i=0;i<n;i++) cin >> a[i];
  
  
  for(int i=0;i<=n;i++) 
    for(int j=0;j<=20;j++)
      memo[i][j] = 0;

  saiki(1,a[0]);

  //  cout << "ans" <<endl;
  //  cout << ans<<endl;
  cout << memo[1][a[0]] << endl;
  // cout <<count <<endl;
  return 0;

}