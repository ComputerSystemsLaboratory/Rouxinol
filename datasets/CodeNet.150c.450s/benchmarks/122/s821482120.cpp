#include <cstdio>
#include <cstring>
#include <queue>

char cmd[10];
std::priority_queue<int> pque;

int main()
{
    while( scanf( "%s", cmd ), strcmp( cmd, "end" ) )
    {
        if( !strcmp( cmd, "insert" ) )
        {
            int k;
            scanf( "%d", &k );

            pque.push( k );
        }
        else
        {
            printf( "%d\n", pque.top() ); 
            pque.pop();
        }
    }

    return 0;
}