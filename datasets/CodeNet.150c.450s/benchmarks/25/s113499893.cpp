#include<cstdio>
int main(void){char s[1200];int a[26]={0},i=0,n;while(scanf("%c",s+i++)!=EOF);n=i;for(i=0;i<n;++i){if((0<=(s[i]|0x20)-'a')&&((s[i]|0x20)-'a'<=25)){++a[(s[i]|0x20)-'a'];}};for(i=0;i<26;printf("%c : %d\n",'a'+i,a[i]),++i);return(0);}
