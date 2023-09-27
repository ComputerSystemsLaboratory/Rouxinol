#include <cstdio>
using namespace std;

int min(int a,int b){return a<b?a:b;}
int max(int a,int b){return a>b?a:b;}
int n,a[1000010],b[1000010],l[200];
int main(){
    for(int i=1;i<200;i++)
        l[i-1]=(i*(i+1)*(i+2))/6;
    for(int i=1;i<=1000000;i++){
        a[i]=i;
        b[i]=i;
        for(int t=0;l[t]<=i;t++){
            a[i]=min(a[i],a[i-l[t]]+1);
            if(l[t]%2)
                b[i]=min(b[i],b[i-l[t]]+1);
        }
    }
    while(scanf("%d",&n),n){
	    printf("%d %d\n",a[n],b[n]);
    }
    return 0;
}