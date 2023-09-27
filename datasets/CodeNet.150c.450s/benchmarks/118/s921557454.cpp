#include<stdio.h>

int main(){
  
  int i,j,k,l,year,month,day,n,count,max_day;
  int data[100];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    count=0;
    scanf("%d %d %d",&year,&month,&day);
    for(j=year;j<1000;j++){
      for(k=month;k<=10;k++){
	if( k%2 == 1 || j%3 == 0){
	  max_day = 20;
	}
	else if( k%2 == 0){
	  max_day = 19;
	}
	for(l=day;l<=max_day;l++){
	  count++;
	}
	day=1;
      }
      month=1;
    }
    data[i] = count;
  }
  for(i=0;i<n;i++){
    printf("%d\n",data[i]);
  }
  return 0;
}