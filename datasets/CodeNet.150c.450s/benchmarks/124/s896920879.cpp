#include <iostream>

using namespace std;
static const int MAX=100;
static const int INFTY= (1<<21);
int M[MAX][MAX]; //?????\??????
int d[MAX]; //?????????????????¬
bool visited[MAX]; //???????¢??????????

void dijkstra(int n)
{
    int min;
    //init
    for(int i=0;i<n;i++)
    {
        visited[i]=false;
        d[i]=INFTY;
    }
    //select node 0
    d[0]=0;
    while(true)
    {
        min=INFTY;
        int min_point=-1;
        for(int i=0;i<n;i++)  //?????????????????????????????\??¶???
        {
            if(min>d[i]&&visited[i]==false)
            {
                min_point=i;
                min=d[i];
            }
        }
        if(min_point==-1) break;  //??????????????°????????????????????????

        visited[min_point]=true;
        //update
        for(int i=0;i<n;i++)
        {
            if(visited[i]==false&&M[min_point][i]!=INFTY)
                if(d[min_point]+M[min_point][i]<d[i])
                    d[i]=d[min_point]+M[min_point][i];
        }
    }
    //print
    for(int i=0;i<n;i++)
        cout<<i<<' '<<(d[i]==INFTY?-1:d[i])<<endl;
}
int main()
{
    int n;
    cin>>n;
    //init
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            M[i][j]=INFTY;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        int nodes_num;
        cin>>nodes_num;
        for(int k=0;k<nodes_num;k++)
        {
            int v,d;
            cin>>v>>d;
            M[j][v]=d;
        }
    }
    dijkstra(n);
}