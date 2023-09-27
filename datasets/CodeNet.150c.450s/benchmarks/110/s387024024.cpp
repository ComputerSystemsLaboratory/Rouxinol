#include<bits/stdc++.h>
using namespace std ;

#define inf 99999999
typedef pair<int,int> pii ;

int h ,w ,n ,minute ;
char maze[1000][1000] ;
queue<pii> q ;
int data[1000][1000] ;

int bfs( int N )
{
    int y[4] = { -1, 0, 1,  0 } ;
    int x[4] = {  0, 1, 0, -1 } ;
    pii Pcmp ;
    int PcmpY = 0 ;
    int PcmpX = 0 ;

    for ( int i = 0 ; i < h ; i++ )
    {
        for ( int j = 0 ; j < w ; j++ )
        {
            if ( ( N == 0 && maze[i][j] == 'S' ) || ( N != 0 && maze[i][j] == '0'+N ) )
            {
                data[i][j] = 0 ;
                q.push( pii(i,j) ) ;
            }
            else data[i][j] = inf ;
        }
    }

    while ( q.size() )
    {
        Pcmp = q.front() ;
        q.pop() ;
        if ( maze[Pcmp.first][Pcmp.second] == '0'+N+1 ) break ;

        for ( int i = 0 ; i < 4 ; i++ )
        {
            PcmpY = Pcmp.first + y[i] ;
            PcmpX = Pcmp.second + x[i] ;
            if ( PcmpY >= 0 && PcmpY <= h-1 && PcmpX >= 0 && PcmpX <= w-1 )
            {
                if ( maze[PcmpY][PcmpX] != 'X' && data[PcmpY][PcmpX] == inf )
                {
                    q.push( pii( PcmpY,PcmpX ) ) ;
                    data[PcmpY][PcmpX] = data[Pcmp.first][Pcmp.second] + 1 ;
                }
            }
        }
        /* [debug]
        for ( int i = 0 ; i < h ; i++ )
        {
            printf("[debug]%3d:",i);
            for ( int j = 0 ; j < w ; j++ )
            {
                printf("%8d,",data[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        */
    }

    while ( q.size() ) q.pop() ;
    return data[Pcmp.first][Pcmp.second] ;
}

int main()
{
    cin >> h >> w >> n ;
    for ( int i = 0 ; i < h ; i++ )
    {
        cin >> maze[i] ;
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        minute += bfs(i) ;
    }
    printf("%d\n",minute) ;
    return 0 ;
}