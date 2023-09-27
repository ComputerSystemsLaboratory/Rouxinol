#include<cstdio>
#include<algorithm>
using namespace std;

int n;

int slv(int now, int t);

int main(){
  
  while(scanf(" %d",&n) != EOF){
    printf("%d\n",slv(0,0));
  }
  
  return 0;
}

int slv(int now, int t){
  if(now == 4){
    if(t == n)return 1;
    return 0;
  }
  
  int ans = 0;
  for(int i=0;i<10;i++){
    ans += slv(now + 1, t + i);
  }
  
  return ans;
}