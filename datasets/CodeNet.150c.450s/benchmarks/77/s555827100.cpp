#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  char dir; //direction                                                         
  int x,y,j,k;
  int dist; //distance                                                          
  int xy[21][21];
    while (cin >> j && j){
      memset(xy,0,sizeof(xy));
      for(int i=0;i<j;i++){
        cin >> x >> y;
        xy[x][y]=1;
      }
      cin >> k;
      x=10;
      y=10;
      int m=0;
      for(int i=0;i<k;i++){
        cin >> dir >> dist;
        for(int l=0;l<dist;l++){
          if(dir == 'N')
            y++;
          else if(dir=='S')
            y--;
          else if(dir=='W')
            x--;
          else if(dir=='E')
            x++;
          if(xy[x][y]==1){
            m++;
            xy[x][y]=0;
          }
        }
      }
      if(j==m)
          cout << "Yes" << endl;
        else
          cout << "No" << endl;
    }
}