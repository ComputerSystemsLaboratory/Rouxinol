#include <iostream>

using namespace std;

int main()
{
    int n, y, m, d, ans;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>y>>m>>d;
        if (y%3==0) ans=21-d+20*(10-m)+(999-y)*590/3;
        else if (y%3==1)
        {
            if (m%2==0) ans=415-d+39*(10-m)/2+590*(997-y)/3;
            else ans=435-d+39*(9-m)/2+590*(997-y)/3;
        }
        else
        {
            if (m%2==0) ans=220-d+39*(10-m)/2+590*(998-y)/3;
            else ans=240-d+39*(9-m)/2+590*(998-y)/3;
        }
        cout<<ans<<'\n';
    }
    return 0;
}

