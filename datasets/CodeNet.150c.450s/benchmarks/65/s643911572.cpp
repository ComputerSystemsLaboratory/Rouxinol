#include<stdio.h>
#include<string.h>
char a[105][3],b[105][3],c[105][3];
void squt(char a[],char b[]){
    char s[105];
    strcpy(s,a);memset(a,0,strlen(a));
    strcpy(a,b);memset(b,0,strlen(b));
    strcpy(b,s);
}
int main(){
    char s;
int n,m,i,j,k,bo=1;
scanf("%d%c",&n,&s);
for(i=0;i<n;i++){
    scanf("%s",a[i]);
    strcpy(b[i],a[i]);
}
for(i=1;i<n;i++){
    for(j=0;j<n-i;j++)
    {
        if(a[j][1]>a[j+1][1]){
            squt(a[j],a[j+1]);
        }
    }
}
for(i=0;i<n;i++){
        m=i;
        for(j=i;j<n;j++){

        if(b[j][1]<b[m][1])m=j;
         }
        squt(b[i],b[m]);
}

for(i=0;bo!=0&&i<n;i++){

    if(a[i][0]!=b[i][0]||a[i][1]!=b[i][1])bo=0;

}
for(i=0;i<n-1;i++)printf("%s ",a[i]);printf("%s",a[n-1]);

printf("\nStable\n");
for(i=0;i<n-1;i++)
printf("%s ",b[i]);printf("%s",b[n-1]);
if(bo==0)
printf("\nNot stable\n");
else printf("\nStable\n");
return 0;
}