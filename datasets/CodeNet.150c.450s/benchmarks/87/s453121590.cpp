#include <iostream>
#include <cstdio>
#define EMPTY -1
using namespace std;

int main()
{
  int h;

  for(;;){
    scanf("%d",&h);
    if(h==0)return 0;
    int map[h][5];
    //????????????????????????
    for(int i=0;i<h;i++){
      for(int j=0;j<5;j++){
	scanf("%d",&map[i][j]);
      }
    }

    bool next = true;
    int point;
    point=0;   //????¨????????????????
    for(;;){
      /*/???????¢??????¨
      for(int i=0;i<h;i++){
	for(int j=0;j<5;j++){
	  printf("%3d ",map[i][j]);
	}
	printf("\n");
      }
      printf("\n");
      //???????????§//*/

      if(!next)break;
      next = false;
    
      //???????¨????????????????
      for(int i=0;i<h;i++){  //???????????????????????????????????????(i)
	for(int j = 0;j<5;j++){  //??????????§???°???(j)
	  if(map[i][j]==EMPTY)continue;
	  int count = 1;  //??£?¶??????????????????°(count)
	  int k;  //????????°???(k)
	  for(k=j+1;k<5;k++){
	    if(k>=5)break;
	    if(map[i][j]!=map[i][k])break;
	    count++;
	  }
	  if(count>=3){   //??£?¶???????????????´???
	    next = true;
	    point+=map[i][j]*count;  //????????????
	    //printf("point++(%d*%d)\n",map[i][j],count);
	    //printf("point=%d\n",point);
	    for(int l=0;l<count;l++){ //????????????
	      map[i][j+l]=EMPTY;
	    }
	    count=1;
	  }
	}
      }
   
      /*/???????¢??????¨
      for(int i=0;i<h;i++){
	for(int j=0;j<5;j++){
	  printf("%3d ",map[i][j]);
	}
	printf("\n");
      }
      printf("\n");
      //???????????§//*/

      //????????????
      for(int i=0;i<5;i++){  //???????????????????????????????????????(i,0-5)
	for(int j=h-1;j>=0;j--){  //??\?????????????§???°???(j,(h-1)-0)
	  if(map[j][i]!=EMPTY)continue;
	  for(int k=(j-1);k>=0;k--){  //????§???°???????????????????¨?
	    if(k<0)break;
	    if(map[k][i]!=EMPTY){  //?????????????????£??????????§???°?????¨??\?????????
	      map[j][i]=map[k][i];
	      map[k][i]=EMPTY;
	      break;
	    }
	  }
	}
      }//*/
    
      //printf("%d\n",point);
    }
    printf("%d\n",point);
  }
}
    