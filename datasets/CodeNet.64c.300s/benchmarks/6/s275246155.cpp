#include <iostream>
using namespace std;
int main(void){
    int a[4][3][10];
    for(int b=0;b<4;b++)
    for(int f=0;f<3;f++)
    for(int r=0;r<10;r++){
        a[b][f][r]=0;
    }

    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int b,f,r,v;
        cin >> b>>f>>r>>v;
        a[b-1][f-1][r-1]+=v;
    }
    
    for(int b=0;b<4;b++)
    {
        for(int f=0;f<3;f++)
        {
            for(int r=0;r<10;r++){
                cout << " " << a[b][f][r];
            }
            cout << endl;
        }
        if(b<3)
        cout << "####################" << endl;
    }
}