#include<stdio.h>
int main(void){
  int s,count=0,out_x[200],out_y[200],move_x[200]={},move_y[200]={},n,d,i,max_x,max_y,min_x,min_y,x,y;
  while(1){
    scanf("%d",&s);
    if(s==0){
      break;
    }
    
    move_x[0]=0;
    move_y[0]=0;
    min_x=0;
    min_y=0;
    max_x=0;
    max_y=0;
    for(i=0;i<s-1;i++){
      scanf("%d %d",&n,&d);
      if(n!=0){
	x=move_x[n-1];
	y=move_y[n-1];
      }
      else{
	x=0;
	y=0;
      }
      if(d==0)
	x--;
      if(d==1)
	y--;
      if(d==2)
	x++;
      if(d==3)
	y++;
      move_x[i]=x;
      move_y[i]=y;
      //printf("move %d %d\n",move_x[i],move_y[i]);
    }
    for(i=0;i<s-1;i++){
      if(max_x<move_x[i])
	max_x=move_x[i];
      if(max_y<move_y[i])
	max_y=move_y[i];
      if(min_x>move_x[i])
	min_x=move_x[i];
      if(min_y>move_y[i])
	min_y=move_y[i];
    }
    //    printf("max=%d %d\n",max_x,min_x);
    //printf("y=%d %d\n",max_y,min_y);
    if(min_x < 0)
    min_x=min_x*-1;
    if(min_y < 0)
    min_y=min_y*-1;
    
    max_x=max_x+min_x;
    max_y=max_y+min_y;
    out_x[count]=max_x+1;
    out_y[count]=max_y+1;
    count++;
    printf("%d %d\n",out_x[count-1],out_y[count-1]);
  }
  return 0;
}