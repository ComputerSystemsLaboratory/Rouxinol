#include<iostream>
using namespace std;
int main(){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        /*
        if(a<b && b<c){
                printf("Yes\n");
        }else{
                printf("No\n");
        }
        */
        printf(((a<b)&&(b<c))?"Yes":"No");
        printf("\n");
        return 0;
}