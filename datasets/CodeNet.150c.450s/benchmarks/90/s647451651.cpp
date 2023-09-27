#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int ans[100]={0};
    int kari;
    
    while(cin>>n)
        ans[n]++;
    
    kari=ans[0];
    for(int i=1;i<99;i++)
    {
        if(kari<ans[i])
            kari=ans[i];
    }
    
    for (int i=0; i<100; i++)
    {
        if(kari==ans[i])
            cout<<i<<endl;
    }
    
    return 0;
}