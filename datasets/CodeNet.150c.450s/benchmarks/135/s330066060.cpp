#include<bits/stdc++.h>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

const int N = 1600;

int h,w;
int A[N];
int B[N];

void init(){

}

bool input(){
  cin>>h>>w;
  if(h==0)return 0;
  rep(i,h)cin>>A[i];
  rep(i,w)cin>>B[i];
  return true;
}


int solve(){
  int C[N]={0};
  int D[N]={0};
  rep(i,h){
    C[i+1] = C[i]+A[i];
  }
  rep(i,w){
    D[i+1] = D[i]+B[i];
  }

  map<int,int> sum;
  rep(i,h){
    reps(j,i,h){
      int s = C[j+1]-C[i];
      sum[s]++;
      // printf("s %d  %d\n",s,sum[s]);
    }
  }

  int ans = 0;
  rep(i,w){
    reps(j,i,w){
      int s = D[j+1]-D[i];
      ans += sum[s];
      // printf("g %d  %d\n",s,sum[s]);
    }
  }

  return ans;

}
int main(){
  while(init(),input())printf("%d\n",solve());
}