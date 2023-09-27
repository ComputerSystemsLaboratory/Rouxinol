#include<stdio.h>
#include<string.h>
using namespace std;
char a[105][5];
char  b[105][5];
int q=1;
void squt(char a[],char b[]){
    char s[105];
    strcpy(s,a);
    strcpy(a,b);
    strcpy(b,s);
}

int main(){
int n;
char s;
scanf("%d%c",&n,&s);
for(int i=0;i<n;i++){
    scanf("%s",a[i]);
    strcpy(b[i],a[i]);

}

 for(int i=1 ;i<n;i++){
   for(int j=0;j<n-i;j++){
    if(a[j][1]>a[j+1][1]){
        squt(a[j],a[j+1]);
    }
   }
 }
 for(int i=0;i<n;i++){
    int m=i;
    for(int j=i;j<n;j++){
        if(b[j][1]<b[m][1]){
            m=j;
        }
    }
        squt(b[i],b[m]);

 }

 for(int i=0;q!=0&&i<n;i++){
    if(a[i][0]!=b[i][0]||a[i][1]!=b[i][1]){
        q=0;
    }

 }

for(int i=0;i<n-1;i++){
    printf("%s ",a[i]);
 }
 printf("%s",a[n-1]);
 printf("\nStable\n");
 for(int i=0;i<n-1;i++){
    printf("%s ",b[i]);
 }
 printf("%s",b[n-1]);
 if(q==0){
    printf("\nNot stable\n");
 }
 else {
  printf("\nStable\n");
 }

return 0;
}