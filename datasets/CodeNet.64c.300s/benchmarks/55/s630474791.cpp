#include <iostream>
using namespace std;

int main()
{
    for (int i=0; ;++i ) {
        int x;
        cin>>x;
        if(x==0)
            break;
        else{
            cout<<"Case "<<i+1<<": "<<x<<endl;

        }
    }
}
