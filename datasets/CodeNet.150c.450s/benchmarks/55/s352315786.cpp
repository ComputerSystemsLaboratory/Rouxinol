#include<stdio.h>

int main(void)


{


char str[1010];


int i,sum;


scanf("%s",str);


while(str[0]!='0'){


i=0;


sum=0;


while(str[i]){


sum+=str[i]-'0';


i++;


}


printf("%d\n",sum);


scanf("%s",str);


}


return 0;


}