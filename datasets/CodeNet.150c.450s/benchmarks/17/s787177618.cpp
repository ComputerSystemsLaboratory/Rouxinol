#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5+2];
   for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
   sort(arr,arr+5);
   for(int i=4;i>=1;i--)
    cout<<arr[i]<<" ";
    cout<<arr[0]<<endl;
    return 0;
}