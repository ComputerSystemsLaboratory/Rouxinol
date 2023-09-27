#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    int i,n,j,k,l;
    double a[3];
    cin >> n;
    while(n--)
    {
        for(i=0;i<3;i++)
            cin >> a[i];
        sort(a,a+3);
        if((sqrt(a[0]*a[0]+a[1]*a[1]))==(sqrt(a[2]*a[2])))
            cout << "YES" <<endl;
        else
            cout << "NO" <<endl;
    }
    return 0;



}