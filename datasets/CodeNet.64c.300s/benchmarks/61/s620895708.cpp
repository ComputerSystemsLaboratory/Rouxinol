#include <algorithm>
#include <iostream>

using namespace std;

int main () {
    int r,c;
    int tec=0;
    cin>>r>>c;
    int ave[r][c];
    
    for(int s=0;s<r; s++)
    {
        for(int t=0; t<c; t++)
        {
            cin>>ave[s][t];
        }
    }
        for(int s=0;s<r; s++)
        {
            int num=0;
            for(int t=0; t<c; t++)
            {
                cout<<ave[s][t]<<" ";
                num+=ave[s][t];
            }
            cout<<num;
            cout<<endl;
        }
    for(int m=0; m<c; m++)
    {int st=0;
        for(int w=0;w<r; w++)
        {
            st += ave[w][m];
            tec+=ave[w][m];
        }
        cout<<st<<" ";
    }
    cout<<tec<<endl;
    
    return 0;
}