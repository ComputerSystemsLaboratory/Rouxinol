#include <cstdio>
#include <utility>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x < y) std::swap(x,y);

    while(x % y != 0){
        x = x % y;
        std::swap(x,y);
    }    
    printf("%d\n",y);

}
