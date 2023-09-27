#include<cstdio>
using namespace std;
int main(){
    int k[] = {500,100,50,10,5,1};
    int n;
    while(scanf("%d",&n),n){
    n = 1000-n;
    int ans = 1;
    for(int i = 0;;){
        if(n-k[i] == 0)break;
        if(n-k[i] > 0){
            ans++;
            n = n-k[i];
        }
        else{
            i++;
        }
    }
    printf("%d\n",ans);
    }
    return 0;
}