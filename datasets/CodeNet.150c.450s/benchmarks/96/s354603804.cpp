#include <iostream>
#include <cstdio>
#include <cstdlib>

int main(void)
{
  int n;
  char buf[1026];
  int count=0;
  int tmp;

  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%s",buf);
    for(int j=0;buf[j]!='\0';j++){
      if(buf[j]=='\n')continue;
      
      if(buf[j]!='0'){
	tmp = buf[j]-'0';
	count++;
      }
      else{
	if(count==0){continue;}
	switch(tmp){
	case 1:
	  if(count%5==1)printf(".");
	  if(count%5==2)printf(",");
	  if(count%5==3)printf("!");
	  if(count%5==4)printf("?");
	  if(count%5==0)printf(" ");
	  break;
	case 2:
	  if(count%3==1)printf("a");
	  if(count%3==2)printf("b");
	  if(count%3==0)printf("c");
	  break;
	case 3:
	  if(count%3==1)printf("d");
	  if(count%3==2)printf("e");
	  if(count%3==0)printf("f");
	  break;
	case 4:
	  if(count%3==1)printf("g");
	  if(count%3==2)printf("h");
	  if(count%3==0)printf("i");
	  break;
	case 5:
	  if(count%3==1)printf("j");
	  if(count%3==2)printf("k");
	  if(count%3==0)printf("l");
	  break;
	case 6:
	  if(count%3==1)printf("m");
	  if(count%3==2)printf("n");
	  if(count%3==0)printf("o");
	  break;
	case 7:
	  if(count%4==1)printf("p");
	  if(count%4==2)printf("q");
	  if(count%4==3)printf("r");
	  if(count%4==0)printf("s");
	  break;
	case 8:
	  if(count%3==1)printf("t");
	  if(count%3==2)printf("u");
	  if(count%3==0)printf("v");
	  break;
	case 9:
	  if(count%4==1)printf("w");
	  if(count%4==2)printf("x");
	  if(count%4==3)printf("y");
	  if(count%4==0)printf("z");
	  break;
	}
	count=0;
      }
    }
    printf("\n");
  }
      
  return 0;
}