#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int arr[10050]= {0};
int main()
{
    int n;
    cin>>n;
    for(int i = 1 ; i <= 105; i++)
    {
        for(int j = 1 ; j <= 105; j++)
        {
            for(int k = 1 ; k <= 105; k++)
            {
                int h = (i*i)+(j*j)+(k*k)+(i*j)+(i*k)+(j*k);
              //  cout<<h<<endl;
                if(h<10050)
                    arr[h]+=1;
            }
        }
    }

    for(int i = 1 ; i <= n; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
