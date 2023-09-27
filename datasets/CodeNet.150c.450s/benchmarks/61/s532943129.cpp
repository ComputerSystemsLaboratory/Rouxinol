#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,a,b,c,x;
    while(scanf("%d%d%d%d%d",&n,&a,&b,&c,&x),n){
        int val[100];
        for(int i=0;i<n;i++)scanf("%d",val+i);
        int pos=0;
        bool flag=true;
        for(int i=0;i<=10000;i++){
            if(val[pos]==x)pos++;
            if(pos==n){
                printf("%d\n",i);
                flag=false;
                break;
            }
            x=(a*x+b)%c;
        }
        if(flag)puts("-1");
    }
    return 0;
}