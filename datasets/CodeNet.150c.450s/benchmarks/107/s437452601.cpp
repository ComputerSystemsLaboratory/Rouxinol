#include <stdio.h>
#include <bitset>
using namespace std;
int dp[1010][1010];
bitset<1010> went[1010];
int min(int a,int b){
    if(a>b)return b;
    return a;
}
int dis(int n,int m,char l[],char r[]){
    if(n<0&&m<0)return 0;
    if(n<0)return m+1;
    if(m<0)return n+1;
    if(went[n][m])return dp[n][m];
    went[n][m]=true;
    return dp[n][m]=min(min(dis(n-1,m,l,r),dis(n,m-1,l,r))+1,dis(n-1,m-1,l,r)+(l[n]!=r[m]));
}
int main(){
    int n=0,m=0;
    char l[1010],r[1010];
    for(int i=0;i<1010;i++){
        l[i]=r[i]='\0';
        went[i].reset();
    }
    scanf("%s",l);
    scanf("%s",r);
    while(l[n]!='\0')n++;
    while(r[m]!='\0')m++;
    printf("%d\n",dis(n-1,m-1,l,r));
}