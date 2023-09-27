#include <stdio.h>

void proc(int a,int b,int c){
  char r='F';
  if(a==-1||b==-1)r='F';
  else{
    if(a+b>=80)r='A';
	else if(a+b>=65)r='B';
	else if(a+b>=50)r='C';
	else if(a+b>=30){
	  r='D';
	  if(c>=50)r='C';
	}
  }
  printf("%c\n",r);
}

int main(){
  while(true){
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
	if(a==-1&&b==-1&&c==-1)break;
	proc(a,b,c);
  }
  return 0;
}