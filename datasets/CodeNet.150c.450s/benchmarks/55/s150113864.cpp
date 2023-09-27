#include<stdio.h>


#include<stdlib.h>

#include<string.h>

int main(void)


{


char num_str[1002];


int num;


long sum = 0;


int i;


char tmp;


while (1)


{


fgets(num_str,sizeof(num_str),stdin);


if(num_str[0] == '0') break;


for (i = 0; i < strlen(num_str)-1; i++)

{


tmp = num_str[i];


num = atoi(&tmp);


sum = sum + num;


}


printf("%ld\n",sum);


sum = 0;


memset(num_str, 1002,0);


}


return 0;


}