#include <iostream>
#include <string.h>
#include <fstream>
#include<time.h>
#include <string>
#include <string.h>
#include <vector>
#include <stdio.h>
#include <cstdlib>
#include <stack>
#include <map>
#include <queue>
#include<cctype>
#include <math.h>
#include <algorithm>
#define Size 1000
using namespace std;
char flo[Size][Size];
int dir_x[]={ 0, 0, 1, -1};
int dir_y[]={ 1, -1, 0, 0};
int heng, chang;
int _count;
void dfs(int x, int y, char ch){
    flo[x][y] = '.';
    for(int i = 0; i < 4; i ++){
        int t_x = x + dir_x[i];
        int t_y = y + dir_y[i];
        if((t_x >= 0 && t_x < heng)&&
           (t_y >= 0 && t_y < chang)&&
           flo[t_x][t_y] == ch){
            dfs(t_x,t_y,ch);
           }
    }
    return;
}
int main()
{
    //ifstream in;
    //in.open("a.txt", ios::in);
    while(cin>>heng>>chang){
        memset(flo, 0, sizeof(flo));
        if(heng==0&&chang==0)
            break;
        for(int i = 0; i < heng; i ++){
            for(int j = 0; j < chang; j ++){
                cin>>flo[i][j];
            }
        }
        _count = 0;
        for(int i = 0; i < heng; i ++){
            for(int j = 0; j < chang; j ++){
                if(flo[i][j] != '.'){
                    _count ++;
                    dfs(i,j,flo[i][j]);
                }
            }
        }
        cout<<_count<<endl;
    }
    return 0;
}