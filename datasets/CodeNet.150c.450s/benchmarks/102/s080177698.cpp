#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>

#define ll (long long)
#define REP(i,n) for(int i = 0;i<(int)n;i++)
#define FOR(i,a,b) for(int i = (a);i < (b);i++)
#define RFOR(i,a,b) for(int i = (a);i>(b);i--)
#define COUNTER int i= 0,j = 0,k = 0,l = 0,m = 0, n= 0;
#define RETURN cout << endl;
/*vector<vector<int>>ArrayName = vector<vector<int>>(sizeofx, vector<int>(sizeofy, 0));*/
using namespace std;



int dfs (int x,int y,vector<vector<char>>&v);

int lim_x,lim_y;
int mx[] = {-1,1,0,0};
int my[] = {0,0,-1,1,};

int main (void){
    
    int x,y;
    int sh_x = 0,sh_y = 0;
    
    while(cin >> lim_x >> lim_y,lim_x+lim_y)
        {
            vector<vector<char>>v = vector<vector<char>>(lim_y, vector<char>(lim_x, 0));
            REP(i,lim_y)
            REP(j,lim_x)
            {
                cin >> v[i][j];
                if(v[i][j] == '@')
                    {
                        sh_y = i;
                        sh_x = j;
                    }
            }
            //cout << lim_x << " " << lim_y << endl;
            //cout << sh_x  <<" "<< sh_y << endl;
            cout << dfs(sh_x,sh_y,v) << endl;
            /*v is array name(pointer)*/
      
        }
    return 0;
}

int dfs(int x,int y, vector<vector<char>>&v)
{
    int counter = 1;
    for(int i = 0; i<4;i++){
            int tx = x+mx[i],ty = y+my[i];
            if((tx >= 0 && tx<lim_x) && (ty >= 0 && ty <lim_y) && (v[ty][tx] == '.'))
            {
                v[ty][tx] = '#';
                //cout << v[ty][tx] << endl;
                counter += dfs(tx, ty, v);
                //cout << "come on !" << endl;
            }
                
        }
            
    return counter;
}