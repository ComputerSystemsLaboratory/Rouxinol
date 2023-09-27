#include<cstdio>
using namespace std;
int main(){
    int n,k;
    int s = 0;
    int a[100000] = {0};
    for(;;){
        scanf("%d%d",&n,&k);
        if(n == 0&&k == 0)break;
        for(int i = 0;i < n; i++){
            scanf("%d",&a[i]);
        }
        int x = 0;
        for(int i = 0;i < k; i++){
            x += a[i];
        }
        s = x;
        for(int i = 0;i < (n-k); i++){
            x -= a[i];
            x += a[i+k];
            if(s < x)s = x;
        }
        printf("%d\n",s);
    }
    return 0;
}