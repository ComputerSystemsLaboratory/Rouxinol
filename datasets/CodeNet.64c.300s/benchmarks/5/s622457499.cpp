#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[15];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+10);
    printf("%d\n%d\n%d\n",arr[9],arr[8],arr[7]);
    return 0;
}