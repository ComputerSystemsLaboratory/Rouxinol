#include<cstdio>
#include<ctime>
int mtod(int month){
  int result=0;
  if(month>1) result+=31;
  if(month>2) result+=29;
  if(month>3) result+=31;
  if(month>4) result+=30;
  if(month>5) result+=31;
  if(month>6) result+=30;
  if(month>7) result+=31;
  if(month>8) result+=31;
  if(month>9) result+=30;
  if(month>10) result+=31;
  if(month>11) result+=30;
  return result;
}
int main(){
  for(;;){
    int m,d;
    scanf("%d %d",&m,&d);
    if(!(m|d)){break;}
    int diff=mtod(m)+d-1;
    switch(diff%7){
    case 0:puts("Thursday");break;
    case 1:puts("Friday");break;
    case 2:puts("Saturday");break;
    case 3:puts("Sunday");break;
    case 4:puts("Monday");break;
    case 5:puts("Tuesday");break;
    case 6:puts("Wednesday");break;
    }
  }
}