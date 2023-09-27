#include <cstdio>
#include <utility>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x < y) std::swap(x,y);

    int ans;
    while(true){
        if(x % y == 0){
            ans = y;
            break;
        }else{
            x = x % y;
            std::swap(x,y);
        }
    }    
    printf("%d\n",ans);

}
