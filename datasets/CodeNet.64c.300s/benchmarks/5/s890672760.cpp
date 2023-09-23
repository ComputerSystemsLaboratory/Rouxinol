#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000],n=10;
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=9; i>=7; i--)
    {
        cout<<arr[i]<<endl;
    }
}