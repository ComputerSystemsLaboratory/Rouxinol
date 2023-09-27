#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int T,y,m,d;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d%d",&y,&m,&d);
        int sum=0;
        if(y%3==0){
            sum+=21-d;
            sum+=(10-m)*20;
        }
        else{
            if(m%2==1) sum+=21-d;
            else sum+=20-d;
            for(int i=m+1;i<=10;i++)
                if(i%2) sum+=20;
                else sum+=19;

        }
        for(int j=y+1;j<=999;j++){
            if(j%3==0) sum+=200;
            else sum+=195;
        }
        printf("%d\n",sum);
    }
    return 0;
}