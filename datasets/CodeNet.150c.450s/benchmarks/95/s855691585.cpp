#include <stdio.h>
int main(){
  int stay,i,a,cou;
  char m1[3],m2[3]; 
 while(1){
    scanf("%d",&a);
    if(a==0)break;
    stay=0;
    cou=0;
    for(i=0;i<a/2;i++){
      scanf("%s %s",m1,m2);
      if(stay==0&&m1[1]=='u'&&m2[1]=='u'){
	cou++;
	stay=1;
      }else if(stay==1&&m1[1]=='d'&&m2[1]=='d'){
	cou++;
	stay=0;
      }
    }
    if(a%2==1)scanf("%s",m1);
    printf("%d\n",cou);
  }
  return 0;
}