#include <stdio.h>
int main()
{
  int i,place,cou,a;
  char o[3],t[3],sute[3];
  while(1){
    scanf("%d",&a);
    if(a==0)break;
    cou=0;
    place=0;
    for(i=0;i<a/2;i++){
      scanf("%s %s",o,t);
      //printf("%c %c\n",o[1],t[1]);///
      if(place==0&&o[1]=='u'&&t[1]=='u'){
	cou++;
	place=1;
      }else if(place==1&&o[1]=='d'&&t[1]=='d'){
	cou++;
	place=0;
      }
    }
    if(a%2==1)scanf("%s",sute);
    printf("%d\n",cou);
  }
  return 0;
}