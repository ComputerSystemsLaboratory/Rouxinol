
//  sosu.cpp(2014/10/12-)


#include <cstdio>
#define MAX_N 50000000

bool s[MAX_N]={false};

int main(){
    int k=0,d,n;
    
    for(int i=3;i<10000;i+=2){
        if(!s[(i-1)/2]){
            for(int j=i;i*j<=MAX_N*2;j+=2) s[(i*j-1)/2]=true;
        }
    }
    
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&d);
        if(d%2==1 || d==2)
            if(!s[(d-1)/2]) k++;
    }
    
    printf("%d\n",k);
    
    
    return 0;
}