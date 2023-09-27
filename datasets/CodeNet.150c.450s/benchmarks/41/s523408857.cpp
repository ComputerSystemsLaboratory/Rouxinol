#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int u[b],v[b],r[b];
    for(int i=0;i<b;i++)
    {
        cin >> u[i] >> v[i] >> r[i];
    }
    int dis[a][a];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            dis[i][j]=INT_MAX;
        }
    }
    int g=0;
    for(int i=0;i<a;i++)
    {
        if(g==0)
        {
            dis[i][i]=0;
            //for(int j=1;j<=a;j++)
            {
                if(g==0)
                {
                    for(int k=1;k<a;k++)
                    {
                        for(int l=0;l<b;l++)
                        {
                            if(dis[i][u[l]]!=INT_MAX)
                            {
                                if(dis[i][v[l]]>dis[i][u[l]]+r[l])
                                {
                                    dis[i][v[l]]=dis[i][u[l]]+r[l];
                                }
                            }
                        }
                    }
                    for(int l=0;l<b;l++)
                    {
                        if(dis[i][u[l]]!=INT_MAX)
                        {
                            if(dis[i][v[l]]>dis[i][u[l]]+r[l])
                            {
                                g++;
                                break;
                            }
                        }
                    }
                }
                else
                    break;
            }
        }
        else
            break;
    }
    if(g>0)
        cout << "NEGATIVE CYCLE" << endl;
    else
    {
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<a;j++)
            {
                if(j<a-1)
                {
                    if(dis[i][j]==INT_MAX)
                        cout << "INF" << " ";
                    else
                        cout << dis[i][j] << " ";
                }
                else
                {
                    if(dis[i][j]==INT_MAX)
                        cout << "INF" << endl;
                    else
                        cout << dis[i][j] << endl;
                }
            }
        }
    }
}

