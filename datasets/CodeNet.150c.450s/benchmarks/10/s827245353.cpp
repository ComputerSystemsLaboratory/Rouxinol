#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = (a); i < (b); i++)
#define REP(i,n) rep(i,0,n)
using namespace std;

int main()
{
    vector<vector<vector<int> > >a(4,vector<vector<int> >(3,vector<int>(10,0)));
    int n;
    cin>>n;
    REP(i,n)
    {
        int b,f,r,v;
        cin>>b>>f>>r>>v;
        a.at(b-1).at(f-1).at(r-1)+=v;
    }
    REP(i,4)
    {
        REP(j,3)
        {
            REP(k,10)
            {
                cout<<" "<<a.at(i).at(j).at(k);
            }
            cout<<endl;
        }
        if(i==3)break;
        cout<<"####################"<<endl;
    }
}

