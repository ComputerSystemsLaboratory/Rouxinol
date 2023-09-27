
#include <iostream>   
#include<stack> 
#include<queue> 
#include<string> 
#include <math.h>
using namespace std;

const int MAX_H = 1000;
const int MAX_W = 1000;
const int a = 100000000;

typedef pair<int, int> P;

int H = 0, W = 0, N = 0; 
 
int food[11][2];
char cheese[MAX_H][MAX_W] = {0}; 
int r[MAX_H][MAX_W]; 
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1}; 

int search(int &sx, int &sy, int &ex, int &ey)
{
 
    P p;
    queue<P> que;
    for(int i=0; i<H; i++)
   {
        for(int j=0; j<W; j++)
       {
           r[i][j] = a;

        }
    }
    que.push(P(sx,sy));
    r[sx][sy] = 0;

    while(que.size())
   {  
        p = que.front();
        que.pop();
        if(p.first == ex && p.second == ey)
			break;
	

	    for(int i=0; i<4; i++)
	   {
		    int xn = p.first + dx[i];
		    int yn = p.second + dy[i];


		    if(xn >= 0 && xn < H && yn >= 0 && yn < W && cheese[xn][yn]!='X' && r[xn][yn] == a )
		   {
			    que.push(P(xn,yn));
			    r[xn][yn] = r[p.first][p.second] + 1;
		    }
	    }

	}
	return r[ex][ey];
}

int main()
{
	int dis = 0;
    cin >> H >> W >> N;
    for(int i=0; i<H; i++)
   {
        for(int j=0; j<W; j++)
       {
          cin >> cheese[i][j];
          if(cheese[i][j] == 'S')
         {
             food[0][0] = i;
             food[0][1] = j;
             cheese[i][j] = '.';
          }
          if(cheese[i][j]>48&&cheese[i][j]<58)
         {
             int num = cheese[i][j] - 48;  
             food[num][0] = i;
             food[num][1] = j;
          }
       }
    }
   

    for(int i=0; i<N; i++)
   {
       dis += search(food[i][0], food[i][1], food[i+1][0], food[i+1][1]); 
    }
    
	cout << dis << endl;
    return 0;
}