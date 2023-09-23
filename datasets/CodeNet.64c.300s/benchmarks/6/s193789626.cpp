#include <iostream>
using namespace std;

int main()
{
    const int ROOM = 10;
    const int FLOOR = 3;
    const int BUILDING = 4;
    int n,b,f,r,v;
    int arr[BUILDING][FLOOR][ROOM] = {{}};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>b>>f>>r>>v;
        arr[b-1][f-1][r-1] += v;
    }

    for(int i=0;i<BUILDING;i++)
    {
        for(int j=0;j<FLOOR;j++)
        {
            for(int k=0;k<ROOM;k++)
            {
                    cout<<" "<<arr[i][j][k];
            }
            cout<<"\n";
        }
        if(i==BUILDING-1)break;

        cout<<"####################"<<"\n";
    }

    return 0;
}