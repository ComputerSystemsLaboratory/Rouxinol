#include <cstdio>
using namespace std;

int min(int a,int b){return a<b?a:b;}
int max(int a,int b){return a>b?a:b;}
int x,y,s;
int main(){
    while(scanf("%d%d%d",&x,&y,&s),x*y*s){
        int ans=0;
        double rate1=(100+x)/100.0+0.000001,rate2=(100+y)/100.0+0.0000001;
        for(int i=1;i<s;i++){
            if(i*rate1>=s)break;
            int j=(s-i*rate1)/rate1;
            while(((int)(i*rate1))+((int)(j*rate1))<s)j++;
            if(((int)(i*rate1))+((int)(j*rate1))!=s)continue;
            ans=max(ans,((int)(i*rate2)+(int)(j*rate2)));
            //printf("%d %d %d\n",(int)(i*rate2),(int)(j*rate2),ans);
        }
        printf("%d\n",ans);
    }
    return 0;
}