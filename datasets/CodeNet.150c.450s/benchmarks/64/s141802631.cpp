#include<cstdio>
#include<algorithm>
using namespace std;
void dfs(int j,int sum);
bool memo[2001];
int a[2001];
int n;
int main(){

  int m,b;
  scanf("%d",&n);
  for(int i = 1;i <= n;i++) scanf("%d",&a[i]);

  fill(memo,memo+2001,0);
  dfs(0,0);
  
  scanf("%d",&m);
  for(int i = 0;i < m;i++){
    scanf("%d",&b);
    if(memo[b] == 1) printf("yes\n");
    else printf("no\n");
  }
  return (0);
}

void dfs(int j,int sum){
  if(memo[sum] != 1) memo[sum]++;
  if(j <= n){
    dfs(j+1,sum+a[j]);
    dfs(j+1,sum);
  }
}