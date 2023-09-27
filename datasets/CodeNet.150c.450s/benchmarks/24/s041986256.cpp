#include<iostream>
#include<algorithm>
#include<utility>
#define MAX 10000
using namespace std;
int compare(pair<int,int> a,pair<int,int> b)
{
  return a>b;
}
int main()
{
    int N,M;
    while(cin>>N>>M&&N)
    {
    int d,p;
    int P=0;
    pair<int,int> pd[MAX];
    int i;
    for(i=0;i<N;i++)
    {
        cin>>d>>p;
        pd[i]=make_pair(p,d);
    }
    sort(pd,pd+N,compare);

    for(i=0;i<N;i++)
    {
        //cout<<pd[i].first<<pd[i].second<<endl;
        if(pd[i].second<=M)
         M-=pd[i].second;
        else //if(0<=M&&pd[i].second>M)
        {
            P+=(pd[i].second-M)*pd[i].first;
            M=0;
        }
    }
    cout<<P<<endl;
    }
    return 0;
}

