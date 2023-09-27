#include <cstdio>

int main(){
    int min,max_s=-1000000001,n,r;
    
    scanf("%d",&n);
    scanf("%d",&min);
    for(int i=0;i<n-1;i++){
        scanf("%d",&r);
        if(r-min>max_s) max_s=r-min;
        if(min>r)min =r;
    }
    
    printf("%d\n",max_s);
    
    return 0;
}