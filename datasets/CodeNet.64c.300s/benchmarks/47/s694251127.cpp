#include <iostream>

using namespace std;

void Solution()
{
    // notice the typing !!
    int n;
    
    int times = 0; // save the data in here about most frequently times
    
    int a[101] = {0};// the array which saves the mode value, at the beginning is all "0"
    
    while(cin>>n)
    {
        a[n]++; //after input some value, array's value can be added by 1 (0 -> 1), repeat this part.
    }
    
    
    for(int i = 0; i < 101; i++) // the data is less than 100
    {
        if(a[i] > times) //check the  a[] value for ensuring the mode value
        {
            times = a[i]; //repeat this part, at the last, can find mode value
        }
    }
    
    for(int i = 0; i < 101; i++) //output mode value
    {
        if(a[i] == times)
        {
            cout<<i<<endl;
        }
    }
    
    return;
}

int main()
{
    Solution();
    return 0;
}