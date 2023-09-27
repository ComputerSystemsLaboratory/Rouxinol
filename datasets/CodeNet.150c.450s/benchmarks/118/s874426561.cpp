#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
using namespace std;

#define CLR(arr,val) memset(arr,val,sizeof(arr))
int fun(int year,int month,int day){
	int sum = 0;
	if(year%3){
	  if(month%2)
		  sum = 20-day+1;
	  else
		  sum = 19-day+1;
	  for(int i = month+1;i <= 10;++i){
	    if(i%2)
			sum += 20;
		else
			sum += 19;
	  }
	}
	else{
	  sum = 20 - day + 1;
	  for(int i = month+1;i <= 10;++i)
		  sum += 20;
	}
	return sum;
}
int main(){
	//freopen("1.txt","r",stdin);
	int numcase;
	scanf("%d",&numcase);
	while(numcase--){
	  int day,month,year;
	  scanf("%d%d%d",&year,&month,&day);
	  int sum1 = 0,sum2 = 0;
	  sum1 = fun(year,month,day);
	  for(int i = year+1;i <= 999;++i){
	    sum2 += fun(i,1,1);
	  }
	  printf("%d\n",sum1+sum2);
	}
	return 0;
}