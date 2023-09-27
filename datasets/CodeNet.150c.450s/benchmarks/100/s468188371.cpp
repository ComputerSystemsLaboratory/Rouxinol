#include <iostream>
using namespace std;
int main()
{
    long int n,sum=1;
    cin>>n;
    for(int a=1;a<=n;a++)
    {

       sum=sum*a;
    }
    cout<<sum<<endl;
    return 0;
}