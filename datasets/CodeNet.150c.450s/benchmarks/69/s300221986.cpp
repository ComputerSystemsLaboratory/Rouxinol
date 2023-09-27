#include <iostream>
#include <stack>

using namespace std;

bool Solution()
{
    
    
    int left = 0;
    int right = 0;
    
    int a[10];
    
    for (int i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
        
        for (int i = 0; i < 10; i++)
        {
            if (a[i] > left) // at the beginning, compare with first ball and the ball before first ball (empty)
            {
                left = a[i];
            }
            else if (a[i] > right)
            {
                right = a[i];
            }
            else                 //when can not enter to the both bottles to the end, then return false
            {
                return false;
            }
        }
    
    return true;
}

int main()
{
    int n;
    
    cin>>n;
    
    while(n--)
    {
        if (Solution())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}