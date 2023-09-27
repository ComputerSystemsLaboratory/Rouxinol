#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    vector< vector < vector <int> > > a(4,vector< vector <int> >(3,vector<int>(10)));
    int n;
    cin >> n;
    while(n--)
    {
        int b,f,r,v;
        cin >> b >> f >> r >> v;
        a[b-1][f-1][r-1] +=v;
    }
    for(int i = 0; i < 4; i++)
    {
        for(int j=0 ; j<3; j++)
        {
            for(int k=0;k<10; k++)
            {
                cout << ' ' << a[i][j][k];

            }
            cout << endl;
        }
        if(i+1 < 4)
        {
            cout << "####################" << endl;
        }
    }


    return 0;

}