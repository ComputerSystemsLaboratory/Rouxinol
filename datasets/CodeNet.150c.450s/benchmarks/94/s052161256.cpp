#include <bits/stdc++.h>
using namespace std;

int num[105] ;
int main()
{
    int n ;
    while(~scanf("%d",&n)){
        for(int i = 0;i<n;i++){
           scanf("%d",num+i) ;
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(num[j]>num[j+1]){
                    ans++;
                    swap(num[j],num[j+1]);
                }
            }
        }
        printf("%d",num[0]) ;
        for(int i = 1 ;i<n;i++){
            printf(" %d",num[i]) ;
        }
        printf("\n") ;
        printf("%d\n",ans) ;
    }
    return 0;
}