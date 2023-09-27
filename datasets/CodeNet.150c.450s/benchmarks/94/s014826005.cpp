#include<iostream>
#include<algorithm>
using namespace std;
#define maxn 1000
int a[maxn];
int n;
int Count=0;
bool flag=1;
void bubbleSort()
{
    for(int i=0;flag;i++)
    {
        flag=0;
        for(int j=n-1;j>=i+1;j--)
        {
            if(a[j]<a[j-1])
            {
                flag=1;
                Count++;
                swap(a[j],a[j-1]);
            }
        }
    }
     for(int i=0;i<n;i++)
    {
        if(i!=n-1)
            cout<<a[i]<<" ";
        else
            cout<<a[i]<<endl;
    }
    cout<<Count<<endl;
}
int main()
{
    while(cin>>n)
    {

        for(int i=0;i<n;i++)
            cin>>a[i];
        bubbleSort();
    }
    return 0;
}