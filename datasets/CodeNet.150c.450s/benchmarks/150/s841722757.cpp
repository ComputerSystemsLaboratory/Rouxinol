#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    scanf("%d",&x);
    int arr[x+1];
    for(int i=0;i<x;i++)
        scanf("%d",&arr[i]);
    sort(arr,arr+x);
    for(int i=0;i<x;i++)
    {
        if(i==x-1)
            printf("%d\n",arr[i]);
        else
            printf("%d ",arr[i]);
    }
    return 0;
}
