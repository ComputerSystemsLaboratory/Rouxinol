#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <climits>
#include <cstdlib>


#define LEN   150

char room[LEN][LEN];
int flag[LEN][LEN];
int w,h;
int ret = 0;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};


int dfs(int x,int y,char c)
{
  if( (x >= 0 && x < w) &&  (  y >= 0 && y < h ))
    {
      if( room[y][x] == c  &&  flag[y][x] == 0 )
        {
          flag[y][x] = ret;
          for(int i = 0 ; i < 4 ; i++)
            dfs(x+dx[i],y+dy[i],c);
        }
    }
  return 0;
}

int main(int arc,char* argv[])
{
  //freopen("in.txt","r",stdin);

  while(std::cin >> h >> w)
    {
      std::cin.get();
      //std::cin.get();
      //std::cout<<w<<" "<<h<<std::endl;
      if(w==0 &&  h==0) break;
      ret = 0;
      for(int i = 0 ; i < h ; i++)
        std::cin.getline(room[i],LEN);
      memset(flag,0,sizeof(flag));

      for(int i = 0 ; i < h ; i++)
        {
          for(int j = 0 ; j < w ; j++)
            {
              if(flag[i][j] == 0)
                {
                  ret = ret + 1;
                  dfs(j,i,room[i][j]);
                }
            }
        }
      //dfs(w0,h0);

     //for(int i = 0 ; i < h ; i++)
     //   {
     //     for(int j = 0 ; j < w ; j++)
     //       {
     //         std::cout<<flag[i][j];
     //       }
     //     std::cout<<std::endl;
     //   }

      std::cout<<ret<<std::endl;
    }
}