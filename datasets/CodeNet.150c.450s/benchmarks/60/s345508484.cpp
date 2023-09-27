#include <stdio.h>

int map_max;
int map[110][110];
int rows;
int cols[110];
int mat[110][110];

void get_map();
void print_map();
void conv_map();
void print_mat();

int main()
{

  get_map();
  //print_map();
  conv_map();
  print_mat();
  return 0;
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


void conv_map()
{
  for(int i=0;i<map_max;i++)
    {
      for(int j=0;j<cols[i];j++)
	{
	  if(map[i][j]!=0)
	    {
	  mat[i][map[i][j]-1]=1;
	    }
	}
    }
  return ;
}

void print_mat()
{
  for(int i=0;i<map_max;i++)
    {
      for(int j=0;j<map_max;j++)
	{
	  printf("%d", mat[i][j]);
	  if(j!=map_max-1)
	    {
	      printf(" ");
	    }
	}
      printf("\n");
    }
}