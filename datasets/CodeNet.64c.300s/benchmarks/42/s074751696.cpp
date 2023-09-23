#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    while(cin>>n,n)
    {
        int xn,yn;
        bool map[24][24]={false};
        while(n--)
        {
            int x,y;
            cin>>x>>y;
            map[y][x]=true;
        }
        int m;
        cin>>m;
        yn=10;
        xn=10;
        while(m--)
        {
            char moji;
            int s;
            cin>>moji>>s;
            for(int i=0;i<s;i++)
            {
                if(moji=='N')
                {
                    yn++;
                    if(map[yn][xn])map[yn][xn]=false;
                }
                else if(moji=='S')
                {
                    yn--;
                    if(map[yn][xn])map[yn][xn]=false;
                }
                else if(moji=='E')
                {
                    xn++;
                    if(map[yn][xn])map[yn][xn]=false;
                }
                else
                {
                    xn--;
                    if(map[yn][xn])map[yn][xn]=false;
                }
            }
        }
        bool b=false;
        for(int i=0;i<24;i++)
        {
            for(int j=0;j<24;j++)
            {
                if(map[i][j])
                {
                    b=true;
                    break;
                }
            }
            if(b)break;
        }
        if(b)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}