#include<stdio.h>
#include<math.h>
bool flag[100000000];
void init(){
    flag[0]=true;
    for(int i=2;i<100000000;i++){
        for(int j=1;i*j<=100000000;j++){
            flag[i*j-1]=true;
        }
    }
}
bool is_prime_number(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n,ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        //if(!flag[x-1]) ans++;
        if(is_prime_number(x)) ans++;
    }
    printf("%d\n",ans);
    return 0;
}