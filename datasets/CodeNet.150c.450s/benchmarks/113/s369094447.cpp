#include <cstdio>
int main(){
 int id,data;
 id=1;
 while(true){
  scanf("%d",&data);
  if (data==0) break;
  printf("Case %d: %d\n",id,data);
  ++id;
 }
 return 0;
};

  