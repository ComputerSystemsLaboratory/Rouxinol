#include <iostream>
#include <set>
#define MAX 2001
using namespace std;
int sum;
void MST(int G[100][100],int n){
    set<int>u;
    set<int>t;
    int min=2001,minj;
    u.insert(0);
    for(int i=1;i<n;i++)
        t.insert(i);
    while(u.size()<n){
        for(set<int>::iterator it_u=u.begin();it_u!=u.end();it_u++)
        {
            for(set<int>::iterator it_t=t.begin();it_t!=t.end();it_t++)
                if(G[*it_u][*it_t]>=0)
                {
                    if(G[*it_u][*it_t]<min)
                    {
                        min=G[*it_u][*it_t];
                        minj=*it_t;
                    }
                }
        }
        sum+=min;
        u.insert(minj);
        t.erase(minj);
        min=MAX;
    }
}
int main()
{
    int n,G[100][100];
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>G[i][j];
    sum=0;
    MST(G,n);
    cout<<sum<<endl;
    return 0;
}
