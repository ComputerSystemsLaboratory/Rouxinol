#include <iostream>
#include<algorithm>
//#include<vector>
#define MAX 10000
using namespace std;

int main()
{
    int m=0;
    long int sum=0;
    int x[MAX]={0};
    cin>>m;
   // x.resize(m,0);
    for(int i=0;i<m;i++)
    {
        cin>>x[i];
        sum+=x[i];
    }
    sort(x,x+m);
    cout<<x[0]<<' '<<x[m-1]<<' '<<sum<<'\n';
    return 0;
}
