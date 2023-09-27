#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <climits>
#include <queue>
#include <iostream>


#define MAX_H 1100
#define MAX_W 1100


struct status
{
  int x;
  int y;
  int step;
  int n;
};


int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

  
int H,W,N;
char maze[MAX_H][MAX_W];
int flag[MAX_H][MAX_W];
int xs,ys;
std::queue<status> Q;


int BFS();

int main(int argc, char* argv[])
{
  //freopen("in.txt","r",stdin);
  while(std::cin>>H>>W>>N)
    {

      std::cin.get();
      //std::cout << H << W << N << std::endl;

      for(int i = 0 ; i < H ; i++)
	std::cin.getline(maze[i],MAX_W);

      //for(int i = 0 ; i < H ; i++)
      //	std::cout << maze[i] << std::endl;

      for(int j = 0 ; j < H ; j++)
	for(int i = 0 ; i < W ; i++)
	  if(maze[j][i] == 'S' )
	    {
	      xs = i;
	      ys = j;
	      break;
	    }
      memset(flag,0,sizeof(flag));
      std::cout<<BFS()<<std::endl;
      
    }
}


int BFS()
{

  while(Q.empty()==false)
    Q.pop();
  status start;
  start.x = xs;
  start.y = ys;
  start.step = 0;
  start.n = 1;

  Q.push(start);

  while(Q.empty() == false )
    {
      status tmp = Q.front();
      Q.pop();


      for(int i = 0 ; i < 4 ; i++)
	{
	  int cx = tmp.x + dx[i];
	  int cy = tmp.y + dy[i];
	  int cstep = tmp.step + 1;
	  int cn = tmp.n;

	  if(cx < 0 || cx >= W ) continue;
	  if(cy < 0 || cy >= H ) continue;
	  if(maze[cy][cx] == 'X' ) continue;

	  if( (maze[cy][cx] - '0') == tmp.n )
	    cn = tmp.n + 1;
	  else
	    cn = tmp.n;

	  if(cn == N+1)
	    return cstep;

	  
	  
	  if(flag[cy][cx] >= cn  ) continue;

	  flag[cy][cx] = cn;

	  status nstatus;
	  nstatus.x = cx;
	  nstatus.y = cy;
	  nstatus.n = cn;
	  nstatus.step = cstep;
	  Q.push(nstatus);
	  
	}
    }

  return -1;
  
}