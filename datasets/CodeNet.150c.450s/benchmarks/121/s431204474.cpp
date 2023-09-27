#include<iostream>
using namespace std;

char field[101][101];
int dx[4] = { 0, -1, 0, 1 };
int dy[4] = { 1, 0, -1, 0 };
int nx, ny;
int h, w;

void dfs( int x, int y, char before );

int main()
{
   int cnt = 0;

   while( 1 )
   {
      cin >> h >> w;
      if( h == 0 && w == 0 ) break;

      for( int i = 0; i < h; ++i )
      {
         for( int j = 0; j < w; ++j )
         {
            cin >> field[i][j];
         }
      }

      for( int i = 0; i < h; ++i )
      {
         for( int j = 0; j < w; ++j )
         {
            if( field[i][j] != '0' )
            {
               dfs( j, i, field[i][j] );
               ++cnt;
            }
         }
      }
      cout << cnt << endl;
      cnt = 0;
   }
}

void dfs( int x, int y, char before)
{
   field[y][x] = '0';
   for( int i = 0; i < 4; ++i )
   {
      nx = x + dx[i];
      ny = y + dy[i];
      if( 0 <= nx && nx < w && 0 <= ny && ny < h && before == field[ny][nx] )
      {
         dfs( nx, ny, before );
      }
   }

   return ;
}