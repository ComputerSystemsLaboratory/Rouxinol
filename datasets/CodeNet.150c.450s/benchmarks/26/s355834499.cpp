#include<cstdio>
using namespace std;

int main(){
    int a,b = 0;
    scanf("%d",&a);
    scanf("%d",&b);

    if(a < b){
        printf("a < b\n");
    }else if(a == b){
        printf("a == b\n");
    }else{
        printf("a > b\n");
    }
}