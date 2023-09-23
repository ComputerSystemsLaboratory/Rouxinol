#include<cstdio>
using namespace std;
const int MAX_R = 10;
const int MAX_C = 10000;
int field[MAX_R][MAX_C];
int _field[MAX_R][MAX_C];
int max(int a, int b){
  if(a > b)
    return a;
  else
    return b;
}
int pow(int a, int x){
  if(x <= 0)
    return 1;
  else
    return a * pow(a,x-1);
}
int solve(int r, int c){
  int res = 0;
  int cnt;
  for(int i = 0 ; i < c ; i++){
    cnt = 0;
    for(int j = 0 ; j < r ; j++){
      if(_field[j][i] == 0)
        cnt++;
    }
    res += max(cnt,r-cnt);
  }
  return res;
}
int ready(int x, int r, int c){
  for(int i = r-1 ; i >= 0 ; i--){
    if(x & 1 == 1){
      for(int j = 0 ; j < c ; j++){
        if(field[i][j] == 0)
          _field[i][j] = 1;
        else
          _field[i][j] = 0;
      }
    }
    else{
      for(int j = 0 ; j < c ; j++)
          _field[i][j] = field[i][j];
    }
    x >>= 1;
  }
  return solve(r,c);
}
int main(){
  int r,c;
  while(true){
    scanf("%d %d",&r,&c);
    if(r == 0 && c == 0)
      break;
    int lim = pow(2,r);
    for(int i = 0 ; i < r ; i++){
      for(int j = 0 ; j < c ; j++)
        scanf("%d",&field[i][j]);
    }
    int max = 0;
    for(int i = 0 ; i < lim ; i++){
      int res = ready(i,r,c);
      if(res > max)
        max = res;
    }
    printf("%d\n",max);
  }
}
