#include<cstdio>
#include<algorithm>

using namespace std;
int x,y,s;

int solve(){
  int res=0;
  for(int i=1;i<s;i++){
    for(int j=1;j<s;j++){
    if(i*(100+x)/100+j*(100+x)/100==s){
      res=max(i*(100+y)/100+j*(100+y)/100,res);
    }

    }
  }
  return res;
}



int main(){
  while(1){
    scanf("%d%d%d",&x,&y,&s);
    if(x==0) break;
    printf("%d\n",solve());
  }
  return 0;
}