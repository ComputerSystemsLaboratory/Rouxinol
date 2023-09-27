#include <queue>
#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int map_max;
int map[110][110];
int rows;
int cols[110];
int howfar[110];
int far;
int visited[110];

void get_map();
void print_map();
int search(int node);
void print_result();
void check_result();

int main()
{

  get_map();
  //print_map();
  for(int i=0;i<map_max;i++)
    {
      visited[i]=1000;
    }
  search(1);
  check_result();
  print_result();
  return 0;
}

void check_result()
{
  for(int i=1;i<map_max;i++)
    {
      if(visited[i]==1000)
	{
	  visited[i]=-1;
	}
    }
}

void print_result()
{
  for(int i=0;i<map_max;i++)
    {
      std::cout << i+1 << " " << visited[i] << std::endl;
    }
}

void get_map()
{

  int k;
  scanf("%d", &map_max);//<100

  for(int i=0;i<map_max;i++)
    {
      scanf("%d", &k);
      scanf("%d", &cols[i]);
      for(int j=0;j<cols[i];j++)
	{
	  map[i][j]=0;
	  scanf("%d", &map[i][j]);
	}
    }

  
  return ;
}

void print_map()
{
  for(int i=0;i<map_max;i++)
    {
      for(int j=0;j<cols[i];j++)
	{
	  printf("%d", map[i][j]);
	}
      puts("");
    }
  return ;
}


int search(int node)
{
  far =1;
  int next =1, now,buf;
  visited[node-1]=0;
  
  queue<int> q;//push root node
  for(int i=0;i<cols[node-1];i++)
    {
      now = map[node-1][i];
      q.push(now);//
      visited[now-1]=visited[node-1]+1;
      
    }

  while(!q.empty())
  {
    next = q.front();
    q.pop();
    for(int i=0;i<cols[next-1];i++)
      {
	now = map[next-1][i];
	if(visited[now-1]==1000)
	  {
	    q.push(now);
	    visited[now-1]=min(visited[next-1]+1, visited[now-1]);
	  }
      }
  }

  return 0;
}

/*
  int search(int node, int far)
  {
  int now = node-1;
  if(visited[now] == 1)//searched
  {
  if(howfar[now]>far)
  {
  howfar[now]=far;
  }
  //return -1;
  }
  else
  {
  howfar[now]=far;
  visited[now]=1;

  //for(int i=0;i<cols[node-1];i++)
  //{
  //  //if(map[node-1][i]!=0)
  //  {
  //  search(map[node-1][i], far+1);
  //  }
  //}
  //return -1;
  }

  for(int i=0;i<cols[now];i++)
  {
  //if(map[now][i]!=0)
  {
  search(map[now][i], far+1);
  }
  }
    

  return -1;
  }
*/