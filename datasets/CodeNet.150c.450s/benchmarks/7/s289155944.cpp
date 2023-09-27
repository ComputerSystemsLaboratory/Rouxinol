#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int i,j,arr[11];

    for(i=0;i<10;++i)
        scanf("%d",&arr[i]);

    sort(arr,arr+10);

    for(i=9;i>=7;--i)
        printf("%d\n",arr[i]);
    return 0;
}