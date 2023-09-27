#include<iostream>
using namespace std;
int main()
{
    int n,i,j,swap,arr[100];

    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<4;i++)
        for(j=0;j<5-i-1;j++)
    {
        if(arr[j]<arr[j+1])
            {
                swap=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=swap;

            }

    }
    for(i=0;i<4;i++)
        {
            cout<<arr[i]<<" ";
        }
        if(i<5)
            cout<<arr[i]<<endl;

    return 0;
    }