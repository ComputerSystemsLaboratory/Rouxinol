#include <iostream>
#include <string>
#include <set>
#define rep(i,a) for(int i=0;i<(a);++i)

int n;
std::set<std::string> S;

int main()
{
    std::cin >> n;
    rep( i, n )
    {
        std::string cmd, str;

        std::cin >> cmd >> str;

        if( cmd == "insert" )
            S.insert( str );
        else
            puts( S.count(str) ? "yes" : "no" );
    }

    return 0;
}