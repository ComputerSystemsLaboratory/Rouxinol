#include <iostream>

auto initDays (int * a , int n , int & prev) -> void
{
    for (auto i = 1; i <= n; ++ i)
    {
        prev = (prev + 1) % 7;
        a [i] = prev;
    }
}

auto main () -> int
{
    const char * table [] =
    {
        "Monday" ,
        "Tuesday" ,
        "Wednesday" ,
        "Thursday" ,
        "Friday" ,
        "Saturday" ,
        "Sunday"
    };

    int day [13][32] = {{}};

    int p = 2;
    initDays (day [1] , 31, p);
    initDays (day [2] , 29, p);
    initDays (day [3] , 31, p);
    initDays (day [4] , 30, p);
    initDays (day [5] , 31, p);
    initDays (day [6] , 30, p);
    initDays (day [7] , 31, p);
    initDays (day [8] , 31, p);
    initDays (day [9] , 30, p);
    initDays (day [10] , 31, p);
    initDays (day [11] , 30, p);
    initDays (day [12] , 31, p);

    int m , d;
    while (std::cin >> m >> d && m && d)
    {
        std::cout << table [day [m] [d]] << std::endl;
    }
}