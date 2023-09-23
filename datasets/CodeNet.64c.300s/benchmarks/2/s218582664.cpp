#include <stdio.h>
int main(){
    int a,b,c;
    char ans;
    while(1){
        scanf("%d%d%d",&a,&b,&c);
        if(a+b<30)ans='F';
        if(a+b>=30){
            ans='D';
            if(c>=50)ans='C';
        }
        if(a+b>=50)ans='C';
        if(a+b>=65)ans='B';
        if(a+b>=80)ans='A';
        if(a==-1||b==-1){
            if(a==b&&c==b)return 0;
            ans='F';
        }
        printf("%c\n",ans);
    }
}