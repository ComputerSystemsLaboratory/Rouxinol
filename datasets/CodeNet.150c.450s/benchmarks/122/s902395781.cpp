#include <iostream>
#include <queue>
#include <vector>
#include <string>

int main()
{
    std::priority_queue<int> q;
    int a;
    std::string s;

    while (1)
    {
        std::cin >> s;
        if (s.at(0) == 'i')
        {
            std::cin >> a;
            q.push(a);
        }
        else if (s.at(1) == 'x')
        {
            std::cout << q.top() << std::endl;
            q.pop() ;
        }
        else
        {
            break ;
        }
        
    }
    return 0 ;
}
