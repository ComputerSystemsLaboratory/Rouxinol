#include <stdio.h>
#include <algorithm>
 
using namespace std;
 
int main(){
    int n,max_num = -1000001,min_num = 1000001,tmp;
    long long int sum = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&tmp);
        sum += tmp;
        max_num = max(max_num,tmp);
        min_num = min(min_num,tmp);
    }
    printf("%d %d %lld\n",min_num,max_num,sum);
}
