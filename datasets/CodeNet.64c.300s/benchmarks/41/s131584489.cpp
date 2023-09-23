#include<iostream>
#define p(i) (i>>1)
#define l(i) (i<<1)
#define r(i)  ((i<<1)+1)
const int Max=500005;
using namespace std;
int arr[500005];
int n;
void maxheapify(int i)
{
    int l=l(i),r=r(i),Maxi=-1;
    if(l<=n&&arr[l]>arr[i])
        Maxi=l;
    else Maxi=i;
    if(r<=n&&arr[r]>arr[Maxi])
        Maxi=r;
    if(Maxi!=i)
    {
        swap(arr[Maxi],arr[i]);
        maxheapify(Maxi);
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>arr[i];
    for(int i=n/2;i>0;i--)
    maxheapify(i);
    for(int i=1;i<=n;i++)cout<<' '<<arr[i];
    cout<<endl;
    return 0;
}

