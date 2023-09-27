#include<cstdio>
#include<algorithm>
using namespace std;
int main(void){
    while(1){
        int num[100000] = {0};
        int sum = 0;
        int ma = -100000;
        int n,k;
        scanf("%d%d",&n,&k);
        if(n == 0 && k == 0) break;

        for(int i = 0;i < n;i++){
            scanf("%d",&num[i]);
            if(i < k) sum += num[i];
        }
        ma = max(sum,ma);
        for(int i = 0;i < n-k;i++){
            sum += num[k+i] -num[i];
            ma = max(sum,ma);
        }
        printf("%d\n",ma);
    }
    return 0;
}