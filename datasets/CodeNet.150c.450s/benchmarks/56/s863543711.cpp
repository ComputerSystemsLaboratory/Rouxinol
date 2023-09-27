#include<stdio.h>
#include<climits>
#include<algorithm>

using namespace std;
int main(){
    int n,x;
    int min_num = INT_MAX,max_num = INT_MIN;
    long long sum = 0;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&x);
        min_num = min(min_num,x);
        max_num = max(max_num,x);
        sum += x;
    }
    printf("%d %d %lld\n",min_num,max_num,sum);
    return 0;
}
