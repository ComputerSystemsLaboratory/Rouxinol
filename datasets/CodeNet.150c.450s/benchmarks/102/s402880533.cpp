#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<numeric>
#include<map>
#include<math.h>

using namespace::std;

char gMap[22][22];
bool MapFlg[22][22];
int gRedCount;
void initMap(void)
{
  for(int i = 0; i < 22; i++)
    {
      for(int j = 0; j < 22; j++)
	{
	  gMap[i][j] = '#';
	  MapFlg[i][j] = false;
	}
    }
  gRedCount = 0;
}

void showMap(void)
{
  for(int i = 0; i < 22; i++)
    {
      for(int j = 0; j < 22; j++)
	{
	  cout << gMap[i][j];
	}
      cout << endl;
    } 
}

int countMap(int x , int y)
{
  int dx[] = { 0  , 1 , -1 , 0 };
  int dy[] = { -1 , 0 ,  0 , 1 };

  for(int i = 0; i < 4; i++)
    {
      int mx = x + dx[i];
      int my = y + dy[i];

      if( gMap[my][mx] != '@' && gMap[my][mx] != '#' && MapFlg[my][mx] == false)
	{
	  gRedCount++;
	  MapFlg[my][mx] = true;
	  countMap(mx , my);
	}
    }

  return gRedCount;

}

void calcAns(int sx, int sy)
{
  cout << countMap(sx,sy) + 1 << endl;
}

int main(void)
{

  int w,h;

  while( cin >> w >> h  && (w != 0 && h != 0))
    {
      int sx,sy;
      initMap();
      for(int i = 1; i <= h; i++)
	{
	  for(int j = 1; j <= w; j++)
	    {
	      cin >> gMap[i][j];
	      if( gMap[i][j] == '@')
		{
		  sy = i;
		  sx = j;
		}
	    }
	}
      calcAns(sx,sy);
    }

  return 0;
}