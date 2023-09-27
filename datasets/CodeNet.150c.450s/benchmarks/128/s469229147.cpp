#include<cstdio>
#include<ctype.h>
#include<iostream>

using namespace std;

int main(){
    int temp;
    int ans=0;
    char a[1000];
    for(int i=0;i<1000;i++){
        scanf("%c",&a[i]);
        if(a[i]=='\n'){
            temp=i-1;
            break;
        }
    }
    for(int i=temp;i>=0;i--){
        printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}