#include<stdio.h>
int main()
{
  int month,date,ans;
  while(1)
    {
      scanf("%d%d",&month,&date);
      if((month==0)&&(date==0)) break;
      ans=date;
      switch(month)
	{
	case 12:
	  ans+=30;
	case 11:
	  ans+=31;
	case 10:
	  ans+=30;
	case 9:
	  ans+=31;
	case 8:
	  ans+=31;
	case 7:
	  ans+=30;
	case 6:
	  ans+=31;
	case 5:
	  ans+=30;
	case 4:
	  ans+=31;
	case 3:
	  ans+=29;
	case 2:
	  ans+=31;
	}
      ans%=7;
      switch(ans)
	{
	case 0:
	  printf("Wednesday\n");
	  break;
	case 1:
	  printf("Thursday\n");
	  break;
	case 2:
	  printf("Friday\n");
	  break;
	case 3:
	  printf("Saturday\n");
	  break;
	case 4:
	  printf("Sunday\n");
	  break;
	case 5:
	  printf("Monday\n");
	  break;
	case 6:
	  printf("Tuesday\n");
	  break;
	}	  	  	  	  
    }
  return 0;
}