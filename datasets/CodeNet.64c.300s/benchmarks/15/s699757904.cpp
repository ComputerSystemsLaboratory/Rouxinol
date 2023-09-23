#include <bits/stdc++.h>

using namespace std;

int num[105] ;
void select(int n)
{
    int ans = 0;
    for(int i= 0 ; i<n ;i++){
        int mini = i ;
        for(int j =i+1;j<n;j++){
            if(num[mini]>num[j]){
                mini=j;
            }
        }
        if(i!=mini){
            ans++;
        }
        swap(num[i],num[mini]) ;

    }
    printf("%d",num[0]) ;
    for(int i = 1 ; i<n;i++){
        printf(" %d",num[i]) ;
    }
    printf("\n") ;
    printf("%d\n",ans) ;
}
int main()
{
    int n ;
    while(~scanf("%d",&n)){
        for(int i = 0 ;i<n;i++){
            scanf("%d",num+i);
        }
        select(n);
    }
    return 0;
}