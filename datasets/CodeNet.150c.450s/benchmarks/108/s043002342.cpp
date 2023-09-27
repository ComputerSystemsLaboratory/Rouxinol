#include<bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0;i<n;i++)
#define lpin(a,i,n) for(int i=0;i<n;i++){cin>>a[i];}
int a[101][101],ans=-1,check[101],n;

void calc(int now,int g,int count){
  if(count>ans && ans!=-1) return;
  if(now==g){
    if(ans==-1){
      ans=count;
      return;
    }
    else{
      ans=min(ans,count);
      return;
    }
  }
  if(check[now]>count) check[now]=count;
  else return;
  lp(i,n+1){
    if(a[now][i]==1)
      calc(i,g,count+1);
  }
}

int main(){
  cin>>n;
  lp(i,n){
    int x,y;
    cin>>x>>y;
    lp(j,y){
      int z;
      cin>>z;
      a[x][z]=1;
    }
  }
  lp(i,n){
    lp(j,101){
      check[j]=1000;
    }
    ans=-1;
    calc(1,i+1,0);
    cout<<i+1<<" "<<ans<<endl;
  }
  return 0;
}

