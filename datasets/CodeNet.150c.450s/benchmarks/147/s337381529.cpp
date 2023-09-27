#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[10001] = {0};
    int m =  min(n,99);
    for(int i = 1 ; i <= m ; i++)
    {
        for(int j = 1 ; j <= m ;j++)
        {
            for(int z = 1 ; z <= m ;z++)
            {
                if(i*i+j*j+z*z+i*j+i*z+j*z <= 10000)
                    arr[i*i+j*j+z*z+i*j+i*z+j*z]++;
            }
        }
    }
    for(int  i = 1 ; i <= n ; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
