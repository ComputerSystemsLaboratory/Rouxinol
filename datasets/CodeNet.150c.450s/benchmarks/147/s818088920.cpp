// C++ program to demonstrate __builtin_popcount() 
#include <iostream> 
#include <math.h>
using namespace std; 

int main() 
{ 
        int n;
        cin>>n;
        int ans[60000]={0};
        for(int i=1;i<=100;i++)
        {
            for(int j=1;j<=100;j++)
            {
                for(int k=1;k<=100;k++)
                {
                    ans[i*i+j*j+k*k+i*j+j*k+k*i]++;
                }
            }
        }
        for(int i=1;i<=n;i++)
            cout<<ans[i]<<"\n";
    return 0; 
} 
