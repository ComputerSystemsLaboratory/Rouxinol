#include<iostream>
#include<cstdio>
using namespace std;

int main() 
{
  int a[4];
  int b[4];
  int brow, hit;
  while(cin>> a[0] >> a[1] >> a[2] >>a[3] >> b[0] >> b[1] >> b[2] >> b[3])
  {
    hit = brow = 0;
    for(int i = 0; i < 4; i++)
    {
      for(int j = 0; j < 4; j++)
      {
        if(a[i] == b[j])
        {
          brow++;
          break;
        }
      }
    }
    for(int i = 0; i < 4; i++)
    {
      if(a[i] == b[i])
      {
        hit++;
      }
    }
    cout << hit << " " << brow - hit << endl;
  }
  return 0;
}