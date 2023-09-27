#include<cstdio>
int main(void){char str[2048];int i=0;do{scanf("%c",&str[i]);}while(str[i++]!='\n');str[i-1]=0;i=-1;while(str[++i]!=0){str[i]^=(((0x61<=str[i])&&(str[i]<=0x7a))||((0x41<=str[i])&&(str[i]<=0x5a)))?0x20:0;}printf("%s\n",str);return(0);}
