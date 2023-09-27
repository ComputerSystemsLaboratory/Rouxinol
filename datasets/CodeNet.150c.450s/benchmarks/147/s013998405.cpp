#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int arr[60001]={0};
    int num;
    for(int x =1 ; x <=100 ; x++)
    {
        for(int y=1; y<=100;y++)
        {
            for(int z=1; z<=100 ;z++)
            {
                num=(x*x)+(y*y)+(z*z)+(x*y)+(y*z)+(x*z) ;
                arr[num]++;
            }
        }
    }
    int n ;
    cin >> n;
    for(int i=1 ; i <=n ; i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}
