#include <bits/stdc++.h>
#include <stdio.h>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n, b, f, r, v;
    int info[4][3][10]; //info[building][floor][room]=people
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                info[i][j][k]=0;
            }
            
        }
        
    }
    

    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cin>>b>>f>>r>>v;
        info[b-1][f-1][r-1] += v;
    }


    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                cout<<' '<<info[i][j][k];
            }
            cout<<endl;
        }

    if (i<3)
    {
        cout<<"####################"<<endl;
    }
    
        
    }
    
    return 0;
}
