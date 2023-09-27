#include <bits/stdc++.h>
using namespace std;
#define INF 1145141919
int DP[100010];
int a[100010];
int main(){
  for(int i = 0;i < 100010;i++)DP[i]=INF;
  int n;
  cin >> n;
  for(int i = 0;i < n;i++)cin >> a[i];
  for(int i = 0;i < n;i++)*lower_bound(DP,DP+n,a[i])=a[i];
  cout << (lower_bound(DP,DP+n,INF) - DP) << endl;
}

