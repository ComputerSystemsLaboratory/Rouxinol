#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
char s[105][105];
//int dx[4]={ -1, 1,0, 0 };
//int dy[4]={ 0, 0, -1,  1 };
int ma[4][2] =
{
    { 0, -1 },
    { 0 , 1 },
    { -1 , 0},
    { 1 , 0 },
};
//int ma[4][2]= {{0,1},{0,-1},{-1,0},{0,1}};
char ch ;
int m,n;

void dfs(int x,int y,char tree)
{
    s[x][y]='1';
    for(int i=0; i<4; i++)
    {
        int xn=x+ma[i][0],yn=y+ma[i][1];
        if(xn>=0&&xn<m&&yn>=0&&yn<n)
        {
            if(s[xn][yn]==tree)
            {
                dfs(xn,yn,tree);
//              cout << xn <<" "<<yn<<endl;
            }
        }

    }

}
int main ()
{

    while(cin >> m >> n&&m&&n)
    {
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin >> s[i][j];
            }
        }
        int sum=0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(s[i][j]!='1')
                {
//                    ch=s[i][j];


                    dfs(i,j,s[i][j]);
                    sum++;
//                    cout  << i <<" "<< j<<endl;
                }
            }
        }
//        for(int i=0; i<m; i++)
//        {
//            for(int j=0; j<n; j++)
//            {
//                cout <<s[i][j]<<" ";
//            }
//            cout << endl;
//        }
        cout << sum <<endl;
    }
    return 0;
}