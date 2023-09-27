#include<bits/stdc++.h>
using namespace std;

int a[2000007];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);
    for(int i=0;i<n;i++)
        (i)?printf(" %d",a[i]):
            printf("%d",a[i]);
    printf("\n");


}