#define Judge_Online
#include<queue>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#define N 1005
using namespace std;
int Sum[N]={0};

int main(){
    #ifdef Judge_Online
//    freopen("Input.txt","r",stdin);
    #endif
    int n, i, j, y, m, d;
    for(i=1;i<1000;i++)
        Sum[i]=Sum[i-1]+(i%3?195:200);
    scanf("%d",&n);
    while(n--){
        scanf("%d%d%d",&y,&m,&d);
        int sum = Sum[999]-Sum[y];
        sum += (20-d+1);
        if(y%3==0)
            sum += (10-m)*20;
        else{
            if(m%2==0)
                sum-=1;
            for(j=m+1;j<=10;j++){
                if(j%2==0)
                    sum+=19;
                else
                    sum+=20;
            }
        }
        printf("%d\n",sum);
    }
	return 0;
}