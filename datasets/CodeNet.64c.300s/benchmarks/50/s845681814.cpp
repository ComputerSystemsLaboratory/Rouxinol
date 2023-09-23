#include <bits/stdc++.h>

using namespace std;

int num[105] ;
void bubbleSort(int n )
{
    int ans= 0 ;
    for(int i=0 ;i<n;i++){
        for(int j = n-1;j>i;j--){
            if(num[j-1]>num[j]){
                swap(num[j-1],num[j]) ;
                ans++;
            }
        }
    }
    printf("%d",num[0]) ;
    for(int i=1;i<n;i++){
        printf(" %d",num[i]) ;
    }
    printf("\n") ;
    printf("%d\n",ans);
}
int main()
{
    int n ;
    while(~scanf("%d",&n)){
        for(int i = 0 ;i<n ;i++){
            scanf("%d",&num[i]) ;
        }
        bubbleSort(n);
    }
    return 0;
}