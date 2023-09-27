#include <iostream>
using namespace std;

int main()
{
    int r=0,c=0;

    cin>>r>>c;
    int arr[101][101]={{}};

    for(int row=0;row<r;row++)
    {
        for(int col=0;col<c;col++)
        {
            cin>>arr[row][col];
        }
    }
    for(int row=0;row<=r;row++)
    {
        for(int col=0;col<=c;col++)
        {
            if(col==c)
            {
                cout<<arr[row][col]<<"\n";
            }else{
                cout<<arr[row][col]<<" ";
                arr[row][c] += arr[row][col];
                arr[r][col] += arr[row][col];
            }
        }
    }

    return 0;
}