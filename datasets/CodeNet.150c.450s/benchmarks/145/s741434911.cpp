#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <map>
#define itr(it,a) for(auto it=(a).begin();it!=(a).end();++it)

typedef std::pair<int, std::string> P;

std::map<std::string, int> m;
P maF( 0, "" ), maL( 0, "" );

int main()
{
    std::string s;
    while( std::cin >> s )
    {
        ++m[s];
    
        maL = std::max( maL, P( s.size(), s ) );
    }

    itr( it, m )
        maF = std::max( maF, P( it->second, it->first ) );

    std::cout << maF.second << ' ' << maL.second << std::endl;

    return 0;
}