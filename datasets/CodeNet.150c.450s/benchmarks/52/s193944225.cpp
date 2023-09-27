#include <iostream>
#include <stack>

int main(void)
{
    std::stack<int> n;
    int m;

    while(std::cin >> m)
    {
        if(m == 0)
        {
            std::cout << n.top() << std::endl;
            n.pop();
        }

        else
        {
            n.push(m);
        }
    }

    return 0;
}