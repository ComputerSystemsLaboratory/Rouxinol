#include <algorithm>
#include <iostream>
#include <string>
#include <set>
#define rep(i,a) for(int i=0;i<(a);++i)
#define all(a) (a).begin(), (a).end()

int m;

int main()
{
    std::cin >> m;
    
    rep( i, m )
    {
        std::set<std::string> S;

        std::string s;
        std::cin >> s;

        rep( i, s.size()-1 )
        {
            std::string t1[2] = { s.substr( 0, i+1 ), s.substr( 0, i+1 ) }, t2[2] = { s.substr( i+1 ), s.substr( i+1 ) };
            std::reverse( all(t1[1]) );
            std::reverse( all(t2[1]) );

            rep( j, 2 ) rep( k, 2 )
            {
                S.insert( t1[j]+t2[k] );
                S.insert( t2[k]+t1[j] );
            }
        }

        std::cout << S.size() << std::endl;
    }

    return 0;
}