#include <iostream>
#include <cmath>
#include <string>

int main(int argc, char *argv[])
{
    int w,h,x,y,r;
    std::cin >> w >> h >> x >> y >> r;

    std::string judge = "Yes";

    if(x - r < 0)judge = "No";
    else if(x + r > w)judge = "No";
    else if(y - r < 0)judge = "No";
    else if(y + r > h)judge = "No";

    std::cout << judge << std::endl;
    return 0;
}