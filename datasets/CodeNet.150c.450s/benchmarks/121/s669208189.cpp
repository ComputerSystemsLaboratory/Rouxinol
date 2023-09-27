#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <ctime>
using namespace std;
char map[100][100];
int counter=0;
char ch;
int m,n;
void dps(int i,int j)
{
    if(i<1 || i>m || j<1 || j>n)    return ;
    if(map[i][j]!=ch)
        return ;
    map[i][j]='.';
    dps(i+1,j);
    dps(i-1,j);
    dps(i,j-1);
    dps(i,j+1);
}

int main()  
{  
    
    while(cin>>m>>n && m!=0 && n!=0)
    {
        counter=0;
        memset(map,'0',sizeof(map));
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>map[i][j];
            }
        }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(map[i][j]!='.')
                {
                    ch=map[i][j];
                    counter++;
                    dps(i,j);
                }
            }
        }
        cout<<counter<<endl;
    }
    //system("pause");
    return 0;
}  
