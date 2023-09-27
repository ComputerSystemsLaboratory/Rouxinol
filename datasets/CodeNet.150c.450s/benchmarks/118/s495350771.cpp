#include<cstdio>
using namespace std;

int cnt(int y,int m,int d){
  int res = 0;
  while(y<1000){
    d++; res++;
    if(m&1 && d>20 || ( !(m&1) && ( (y%3 && d>19) || (!(y%3) && d>20)) ) ){
      m++; d=1;
    }
    if(m>10){
      m = 1; y++;
    }
  }
  return res;
}

int main(){
  int n,y,m,d;
  scanf("%d",&n);
  while(n--){
    scanf("%d%d%d",&y,&m,&d);
    printf("%d\n",cnt(y,m,d));
  }
}