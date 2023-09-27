#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int arr[10005];
    for(int i=0;i<10005;i++)
    {
        arr[i]=0;
    }
    int n;
    cin>>n;
    for(int i=1;i<=100;i++)
    {
        for(int j=1;j<=100;j++)
        {
            for(int k=1;k<=100;k++)
            {
                int ans=i*i+j*j+k*k+i*j+j*k+i*k;
                if(ans<=10005)
                    arr[ans]++;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
