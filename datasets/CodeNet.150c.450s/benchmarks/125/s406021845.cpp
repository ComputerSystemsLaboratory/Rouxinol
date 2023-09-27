#include <stdio.h>

int numberd=1, numberf=1;
int map[100][100];
int numofroot[100];
int visited[100];
int d[100];
int f[100];
int map_size;
 
void get_map();
void print_map();
int search(int node);
void print_result();
int main()
{
  get_map();
  //print_map();
  for(int i=0;i<map_size;i++)
    {
      if(d[i]==0)
	{
	  search(i);
	}
    } 
  print_result();
  return 0;
}

int search(int node)
{
  int k;
  if(d[node]==0)//not visited
    {
      d[node]=numberd;//visited
      numberd++;
      if(numofroot[node]!=0)
	{
	  for(int i=0;i<numofroot[node];i++)
	    {
		{
		  k=search(map[node][i]-1);
		  if(k==-1)
		    {
		      //f[node]=numberd;
		      //numberd++;
		      //return -1;
		    }
		}
	    }
	}
      //else
	{
	  f[node]=numberd;
	  numberd++;
	  return -1;
	}
    }
  else//visited
    {
      return 1;
    }

  return -1;
}

void print_result()
{
  for(int i=0;i<map_size;i++)
    {
      printf("%d %d %d\n",i+1, d[i],f[i]);
    }
  return ;
}

void get_map()
{
  int k;
   scanf("%d", &map_size);
  for(int i=0;i<map_size;i++)
    {
      scanf("%d", &k);
      scanf("%d", &numofroot[i]);
      for(int j=0;j<numofroot[i];j++)
	{
	  scanf("%d", &map[i][j]);
	}
    }
  return ;
}

void print_map()
{
  for(int i=0;i<map_size;i++)
   {
     printf("%d", numofroot[i]);
     for(int j=0;j<numofroot[i];j++)
       {
	 printf("%d", map[i][j]);
       }
     if(i!=map_size-1)
       {
     puts("");
       }
   }
  puts("");
  return ;
}