#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
int matrix[100][100];
pair<int,int> edges[10010];
int cost[10010];
int src[10010];
int dst[10010];
int p[10010];
void init(int n)
{
    for(int i=0;i<=n;i++)
        p[i]=i;
};
int root(int a)
{
    if(p[a]==a)
        return a;
    return (p[a]=root(p[a]));
};
bool is_same_set(int a,int b)
{
    return root(a)==root(b);
};
void unite(int a,int b)
{
    p[root(a)]=root(b);
};

int main()
{
    int n,amount=0,sum=0;
    
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(matrix[i][j]!=-1)
            {
                cost[amount]=matrix[i][j];
                src[amount]=i;
                dst[amount]=j;
                amount++;
            }
        }
    }
    for(int i=0;i<amount;i++)
    {
        edges[i]=make_pair(cost[i],i);
    }

	init(n);
    
    sort(edges,edges+amount);
    
    for(int i=0;i<amount;i++)
    {
        if(is_same_set(src[edges[i].second],dst[edges[i].second]))
			continue;
		unite(src[edges[i].second],dst[edges[i].second]);
		sum+=edges[i].first;
    }
	cout<<sum<<endl;
}