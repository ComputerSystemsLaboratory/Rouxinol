#include <iostream>
#include <stack>

using namespace std;

void Solution()
{
    stack <int> car;
    
    int n;
    
    while (cin>>n)
    {
        if(n == 0)
        {
            cout<<car.top()<<endl;
            car.pop(); //Removes the element on top of the stack
        }
        else
        {
            car.push(n);
        }

    }

    return;
}

int main()
{
    Solution();
    return 0;
}