#include<iostream>

using namespace std;
struct edge{ int from,to,cost; };
edge es[90];
int d[10][10];//h:ツ始ツ点 w:ツ姪堋的ツ地
int e;

int main()
{
    while(1)
    {
        cin>>e;
        if(e==0) break;
        for(int i=0;i<2*e;i+=2)
        {
            cin>>es[i].from>>es[i].to>>es[i].cost;
            es[i+1]=es[i];
            swap(es[i+1].from,es[i+1].to);//ツ逆ツづ個陛督づーツ暗クツつュ
        }
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++) d[i][j]=10000;
        }
        for(int i=0;i<10;i++)
        {
            d[i][i]=0;
            while(true)
            {
                bool up=false;
                for(int j=0;j<2*e;j++)
                {
                    edge ed=es[j];
                    if(d[i][ed.from]!=10000&&d[i][ed.to]>d[i][ed.from]+ed.cost)
                    {
                        d[i][ed.to]=d[i][ed.from]+ed.cost;
                        up=true;
                    }
                }
                if(!up) break;
            }
        }
        pair<int,int> res;
        res.first=-1;res.second=300000;
        for(int i=0;i<10;i++)
        {
            int sum=0;
            for(int j=0;j<10;j++)
            {
                if(d[i][j]!=10000)
                    sum+=d[i][j];
            }
            if(sum!=0&&sum<res.second)
            {
                res.first=i;
                res.second=sum;
            }
        }
        cout<<res.first<<" "<<res.second<<endl;
    }
    return 0;
}