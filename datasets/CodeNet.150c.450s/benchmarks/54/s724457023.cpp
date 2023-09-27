#include <bits/stdc++.h>
char t1[110];
char t2[1510];
int main(){
    int i,j;
    int n1,n2;
    int cnt=0;
    scanf("%s",t1);
    for(i=0;i<strlen(t1);i++){
        t1[i]=tolower(t1[i]);
    }
    while(scanf("%s",t2)){
        if(strcmp(t2,"END_OF_TEXT")==0) break;
        for(i=0;i<strlen(t2);i++){
            t2[i]=tolower(t2[i]);
        }
        if(strcmp(t1,t2)==0) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
