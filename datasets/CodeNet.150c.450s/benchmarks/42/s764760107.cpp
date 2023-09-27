#include <iostream>
#include <queue>
#include <string>
#include <utility>
#define repi(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,a) repi(i,0,a)

typedef std::pair<std::string, int> P;

int n, q;
std::queue<P> que;
int tim;

int main()
{
    std::cin >> n >> q;
    rep( i, n )
    {
        std::string s;
        int t;

        std::cin >> s >> t;

        que.push( P( s, t ) );
    }

    while( !que.empty() )
    {
        P p = que.front(); que.pop();
       
        if( p.second <= q )
        {
            tim += p.second;

            std::cout << p.first << ' ' << tim << std::endl;

            continue;
        }

        tim += q;

        que.push( P( p.first, p.second-q ) );
    }

    return 0;
}