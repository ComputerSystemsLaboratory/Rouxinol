#include <stdio.h>
int main()
{
  char sute,h;
  int scood[21][2],i,j,m,rx,ry,t,cou,k,s;
  while(1){
    scanf("%d",&s);
    if(s==0)break;
    for(i=0;i<s;i++){
      scanf("%d %d",&scood[i][0],&scood[i][1]);
    }
    scanf("%d%c",&m,&sute);
    rx=10;
    ry=10;
    cou=0;
    //    printf("%d",m);
    for(i=0;i<m;i++){
      scanf("%c %d%c",&h,&k,&sute);

      //printf("%c %d\n",h,k);
      for(j=0;j<k;j++){
	if(h=='N')ry++;
	if(h=='E')rx++;
	if(h=='S')ry--;
	if(h=='W')rx--;


	//printf("%d %d \n",rx,ry);///
	for(t=0;t<s;t++){
	  if(scood[t][0]==rx&&scood[t][1]==ry){
	    cou++;
	    scood[t][0]=100;
	    scood[t][1]=100;
           }
	}
      }
    }
    //printf("%d",cou);///
    if(cou==s)printf("Yes\n");
    else if(cou!=s)printf("No\n");
  }
  return 0;
}