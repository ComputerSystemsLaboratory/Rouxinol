#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        int a,b,c,t;
        scanf("%d %d %d",&a,&b,&c);
        for(;;){
                if(a<=b && b<=c){
                        break;
                }
                if(a>b){
                        t=a;
                        a=b;
                        b=t;
                }
                if(b>c){
                        t=b;
                        b=c;
                        c=t;
                }
        }
        printf("%d %d %d\n",a,b,c);
        return 0;
}