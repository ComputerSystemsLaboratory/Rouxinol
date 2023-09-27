#include<cstdio>
int main(void){char s[101],p[101],i,j,m=0,n=0;scanf("%s%s",s,p);while(s[m++]!=0);--m;while(p[n++]!=0);--n;for(i=0;i<m;++i){for(j=0;(s[(i+j)%m]==p[j])&&(j<n);++j);if(j==n){puts("Yes");return(0);}}puts("No");return(0);}
