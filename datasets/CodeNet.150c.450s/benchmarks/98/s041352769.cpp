#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    int n,m;
    int ansn,ansm;
    while(cin>>n>>m,n)
    {
        bool b=false;
        vector<int> nn;
        vector<int> mm;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            nn.push_back(num);
        }
        for(int i=0;i<m;i++)
        {
            int num;
            cin>>num;
            mm.push_back(num);
        }
        sort(nn.begin(),nn.end());
        sort(mm.begin(),mm.end());
        int numn=0;
        int numm=0;
        for(int i=0;i<n;i++)
        {
            numn+=nn[i];
        }
        for(int i=0;i<m;i++)
        {
            numm+=mm[i];
        }
        int minmn=1000;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int a,b;
                a=numn;
                b=numm;
                numn-=nn[i];
                numm-=mm[j];
                numn+=mm[j];
                numm+=nn[i];
                if((minmn>=nn[i]+mm[j])&&numm==numn)
                {
                    ansn=nn[i];
                    ansm=mm[j];
                    minmn=(nn[i]+mm[j]);
                }
                numn=a;
                numm=b;
            }
        }
        if(minmn!=1000)cout<<ansn<<" "<<ansm<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}