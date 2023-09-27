#include <iostream>
using namespace std;

int n;
int H[255];

int main()
{
    cin >>n;
    int i;
    for(i=1;i<=n;i++){
        cin>>H[i];
    }
    for(i=1;i<=n;i++){
        cout<<"node "<<i<<": ";
        cout<<"key = "<<H[i]<<", ";
        if(i!=1)cout<<"parent key = "<<H[i/2]<<", ";
        if(i*2<=n)cout<<"left key = "<<H[i*2]<<", ";
        if(i*2+1<=n)cout<<"right key = "<<H[i*2+1]<<", ";
        cout<<endl;
    }
    return 0;
}