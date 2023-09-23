#include <cstdio>
#include <algorithm>

using namespace std;

int solve(int* raw,int ri, int le, int t);

int main(){
  int time, i, j;
  int raw[10];
  scanf("%d",&time);
  for(i=0;i<time;i++){
    for(j=0;j<10;j++){
      scanf("%d",&raw[j]);
      }
    if(solve(raw,0,0,0)){
      printf("YES\n");
    }else printf("NO\n");
  }
    return 0;
}

  //solve???YES??????1NO??????0
int solve(int* raw, int ri, int le, int t){
  if(t==10){return 1;}
  int rid=0,led=0;
  if(ri<raw[t]) rid=solve(raw,raw[t],le, t+1);
  if(le<raw[t]) led=solve(raw,ri,raw[t], t+1);
  if(ri>=raw[t]&&le>=raw[t]) return 0;
  if(rid+led) return 1;
  else return 0;
  }