#include <iostream>
#include <string>
#include <queue>

struct process {
    std::string name;
    int time;
};

int main()
{
    int n, q;
    int name, time, total = 0;
    process tmp;
    std::queue<process> qu;

    std::cin >> n >> q;

    for ( int i = 0; i < n; ++i ) {
        std::cin >> tmp.name >> tmp.time;
        qu.push(tmp);
    }

    while( 1 ) {
        tmp = qu.front();

        if ( tmp.time <= q ) {
            total += tmp.time;
            qu.pop();
            std::cout << tmp.name << " " <<  total << std::endl;
        } else {
            tmp.time -= q;
            total += q;
            qu.push(tmp);
            qu.pop();
        }

        if ( qu.empty() ) {
            break;
        }
    }
}