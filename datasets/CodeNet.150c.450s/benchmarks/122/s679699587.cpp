#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define INFTY (1<<30)
int a[2000001],m;
char s[100];
void charu1(int i,int k){
if(k<a[i])return ;
a[i]=k;
while(i>1&&a[i/2]<a[i]){
       int b=a[i];
       a[i]=a[i/2];
       a[i/2]=b;
       i=i/2;
}
}
void charu(int k){
m++;
a[m]= -INFTY;
charu1(m,k);
}
void dui(int i){
int big,l,r;
l=i*2;
r=i*2+1;
if(l<=m&&a[i]<a[l])big=l;
else big=i;
if(r<=m&&a[r]>a[big])big=r;
if(big!=i){
    int b=a[i];
    a[i]=a[big];
    a[big]=b;
    dui(big);
}
}
int shanchu(){
int zuida;
if(m<1)return -INFTY;
zuida=a[1];
a[1]=a[m--];
dui(1);
return zuida;
}
int main(){
int n;
while(1){
        scanf("%s",s);
    if(s[0]=='e'&&s[1]=='n')break;
    if(s[0]=='i'){
            scanf("%d",&n);
            charu(n);
    }
    else {
        printf("%d\n",shanchu());
    }
}
return 0;
}