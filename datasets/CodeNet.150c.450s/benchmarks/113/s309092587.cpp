#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{
    int a[10005];
    int i,j;
    i=0;
    a[0] = 1;
    while( a[i] != 0)
    {
        i += 1;
        cin >> a[i];
    }
    for(j=1;j<i;j++)
    {
        cout << "Case " << j << ": " << a[j] << endl;
    }
    return 0;
}