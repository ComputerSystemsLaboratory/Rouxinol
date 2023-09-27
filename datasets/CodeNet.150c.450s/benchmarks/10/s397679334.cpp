#include <stdio.h>
int main()
{
  int n,b,f,r,v,cou,room[5][4][11],bb,ff,rr,vv;
  for(bb=1;bb<=4;bb++){
    for(ff=1;ff<=3;ff++){
      for(rr=1;rr<=10;rr++){
	room[bb][ff][rr]=0;
      }
    }
  }
  scanf("%d",&n);
  for(cou=1;cou<=n;cou++){
    scanf("%d %d %d %d",&b,&f,&r,&v);
      room[b][f][r]=room[b][f][r]+v;
  }
  for(bb=1;bb<=4;bb++){
    for(ff=1;ff<=3;ff++){
      for(rr=1;rr<=10;rr++){
	printf(" %d",room[bb][ff][rr]);
      }
      printf("\n");
    }
    if(bb==4){
      break;
    }
    printf("####################\n");
  }
  return 0;
}
    
  
  