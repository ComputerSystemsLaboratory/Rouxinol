#include<cstdio>
#include<cctype>
using namespace std;
int main(){
    char x;
    int t=0;
    for(int s=0;s<=1000;s++){
        for(int i=0;i<=1000;i++){
            scanf("%c",&x);
            if(x=='\n') break;
            t +=(int)(x-'0');
        }
    if(t==0) break;
    printf("%d\n",t);
    t=0;
    }
}
