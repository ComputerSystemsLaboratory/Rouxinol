#include<cstdio>
#include<algorithm>
using namespace std;
int yaku[10000];
int array_addr = 0;
void Yakunum(int c){
  int   i = 1;
  while(i != c+1){
    if(c % i == 0){
      yaku[array_addr] = i;
      array_addr++;
    }
    i++;
  }
}

int main(){
  int a,b,c,yaku_cout=0;
  scanf("%d %d %d",&a,&b,&c);
  Yakunum(c);
  for(int i=a;i<=b;i++){
    for(int j=0;j<array_addr;j++){
      if(i == yaku[j]){
        yaku_cout++;
      }
    }
  }
  printf("%d\n",yaku_cout);
  return 0;
}