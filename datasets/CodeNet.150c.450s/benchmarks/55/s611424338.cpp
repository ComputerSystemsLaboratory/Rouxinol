#include<cstdio>
int main(void){char x[1001];int c,i;scanf("%s",x);while(x[0]-'0'){for(i=0,c=0;x[i]!=0;++i){c+=x[i]-'0';}printf("%d\n",c);scanf("%s",x);}return(0);}
