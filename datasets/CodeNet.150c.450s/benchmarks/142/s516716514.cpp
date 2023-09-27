#include <stdio.h>
int main()
{
    int N, K;
    scanf("%d%d", &N, &K);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }

    for(int j=0;j<N-K;j++){
        if(arr[j]<arr[j+K]){
            printf("Yes\n");
      } else {
            printf("No\n");
        }
    }

    return 0;
}