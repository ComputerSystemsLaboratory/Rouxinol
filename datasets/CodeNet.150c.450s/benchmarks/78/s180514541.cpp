#include<stdio.h>
#include<algorithm>
using namespace std;
int b[200];
int dp1[1000001];
int dp2[1000001];
int main(){
    int a;
    for(int i=0;i<200;i++){
        b[i]=i*(i+1)*(i+2)/6;
    }
    for(int i=0;i<1000001;i++)dp1[i]=dp2[i]=99999999;
    dp1[0]=dp2[0]=0;
    for(int i=0;i<1000001;i++){
        for(int j=1;j<200;j++){
            if(i+b[j]<=1000000)dp1[i+b[j]]=min(dp1[i+b[j]],dp1[i]+1);
            if(b[j]%2&&i+b[j]<=1000000)dp2[i+b[j]]=min(dp2[i+b[j]],dp2[i]+1);
        }
    }
    while(scanf("%d",&a),a){
        printf("%d %d\n",dp1[a],dp2[a]);
    }
}
