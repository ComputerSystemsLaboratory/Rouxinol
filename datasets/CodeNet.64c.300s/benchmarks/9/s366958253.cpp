#include <iostream>

using namespace std;

int main()
{
    int n;
    int s=100000;
    cin>>n;
    for(int f=1;f<=n;f++)
    {
        s=s*1.05;
        if(s%1000!=0)
        {
            int u =s%1000;
            u=1000-u;
            s+=u;
        }
    }
    cout<<s<<endl;
    return 0;
}