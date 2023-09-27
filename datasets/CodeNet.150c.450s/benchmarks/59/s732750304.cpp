#include<bits/stdc++.h>
using namespace std;

int num[100];
int main()
{
    int n,key;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
        scanf("%d",&num[i]);
    for(int i = 0 ; i < n ; i++)
    {
        key=num[i];
        int j  = i - 1;
        while(j>=0 && num[j]>key)
        {
            num[j+1]=num[j];
            j--;
            num[j+1]=key;
        }
        for(int i = 0 ; i < n ; i++)
        {
            printf("%d",num[i]);
            if(i<n-1)
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

