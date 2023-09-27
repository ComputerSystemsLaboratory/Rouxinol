#include<stdio.h>
#include<ctype.h>
int main(){
    int i;
    int l=0;
    int w;
    int sentence[1200];
    do{
        if((w=getchar())=='\n')break;//ok
        if(w==tolower(w))w=toupper(w);
        else w=tolower(w);
        sentence[l]=w;
        l++;
    }while(l<1200);
    for(i=0; i<l; i++)printf("%c", sentence[i]);
    printf("\n");
    return 0;
}