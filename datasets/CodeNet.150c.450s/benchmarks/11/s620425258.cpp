#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = (a); i < (b); i++)
#define REP(i,n) rep(i,0,n)
using namespace std;

int main()
{
    vector<vector<bool> >p(4,vector<bool>(13,0));
    int n;
    cin>>n;
    REP(i,n)
    {
        char q;
        int x;
        cin>>q>>x;
        if(q=='S')p.at(0).at(x-1)=1;
        if(q=='H')p.at(1).at(x-1)=1;
        if(q=='C')p.at(2).at(x-1)=1;
        if(q=='D')p.at(3).at(x-1)=1;
    }
    REP(i,4)
    {
        REP(j,13)
        {
            if(p.at(i).at(j)==0)
            {
                if(i==0)cout<<'S'<<" "<<j+1<<endl;
                if(i==1)cout<<'H'<<" "<<j+1<<endl;
                if(i==2)cout<<'C'<<" "<<j+1<<endl;
                if(i==3)cout<<'D'<<" "<<j+1<<endl;
            }
        }
    }
}

