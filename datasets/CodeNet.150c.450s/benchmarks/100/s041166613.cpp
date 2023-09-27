#include <iostream>

using namespace std;

void Solution()
{
    int n;
    
    cin>>n;
    
    long sum = 1;
    
    for(int i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    
    cout << sum << endl;
    
    return;
}

int main()
{
    Solution();
    return 0;
}