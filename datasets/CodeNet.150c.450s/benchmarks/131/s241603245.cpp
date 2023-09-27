#include<stdio.h>
#include<algorithm>
using namespace std;
int d[6];
int v[30];
int main(){
    int a,b;
    while(scanf("%d%d",&a,&b),b){
        v[0]=a;
        int i=0;
        bool ok=false;
        while(!ok){
            int c=v[i];
            for(int j=0;j<b;j++){
                d[j]=c%10;
                c/=10;
            }
            i++;
            std::sort(d,d+b);
            int p=0;
            int q=0;
            for(int j=0;j<b;j++){
                p*=10;q*=10;
                p+=d[j];
                q+=d[b-1-j];
            }
            v[i]=q-p;
            for(int j=0;j<i;j++)if(v[j]==v[i]){
                printf("%d %d %d\n",j,v[j],i-j);
                ok=true;
                break;
            }
        }
    }
}