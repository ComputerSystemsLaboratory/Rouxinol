#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n) && n != 0){
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d",&arr[i]);
        }
        int max_e = arr[0], max_s = arr[0];
        for(int cur = 1; cur < n; cur++){
            max_e = max(arr[cur], max_e + arr[cur]);
            max_s = max(max_s, max_e);
        }
        printf("%d\n",max_s);
    }
}