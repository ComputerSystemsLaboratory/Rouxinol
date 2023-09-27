#include <iostream>
#include <algorithm>
using namespace std;
    
int main(int argc, const char * argv[])
{
    int N,a[N];
    for(N=0 ; N < 3 ; N++)
    {
        cin >> a[N];
    }
    sort(a,a+3);
    cout << a[0] << " " << a[1] << " " << a[2]<<endl;
    return 0;
}