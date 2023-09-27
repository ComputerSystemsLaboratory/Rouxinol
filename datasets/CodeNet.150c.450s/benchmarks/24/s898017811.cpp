#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
int N,M;
int S;
pair<int,int>PD[10010];
int main()
{
    while(cin>>N>>M&&N)
    {
        int d,p;
        for(int i=0;i<N;i++)
        {
            cin>>d>>p;
            PD[i]=make_pair(p,d);
        }
    sort(PD,PD+N);
    S=0;
    for(int j=0;j<N;j++)
    {
        S+=PD[j].first*PD[j].second;
    }
    for(int i=N-1;i>=0;i--)
    {
        if(M<=0)
            break;
        int guarded=min(M,PD[i].second);
        S-=PD[i].first*guarded;
        M-=guarded;
    }
    cout<<S<<endl;
    }
    return 0;
}
