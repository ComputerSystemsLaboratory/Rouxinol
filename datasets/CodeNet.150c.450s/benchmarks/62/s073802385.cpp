#include<iostream>
#include<stdio.h>

void Number_3 (int a, int b, int c);

int main(){
    int a,b,c;
    
    scanf("%d %d %d",&a,&b,&c);
    Number_3(a,b,c);
    
    return 0;
}

void Number_3(int a, int b, int c){
    if(a<=b && b<=c) printf("%d %d %d\n",a ,b ,c);
    else if(a<=c && c<=b) printf("%d %d %d\n",a ,c ,b);
    else if(b<=a && a<=c) printf("%d %d %d\n",b ,a ,c);
    else if(b<=c && c<=a) printf("%d %d %d\n",b ,c ,a);
    else if(c<=a && a<=b) printf("%d %d %d\n",c ,a ,b);
    else if(c<=b && b<=a) printf("%d %d %d\n",c ,b ,a);
}
