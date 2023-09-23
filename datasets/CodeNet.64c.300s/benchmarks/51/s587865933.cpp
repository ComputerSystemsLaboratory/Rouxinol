#include <iostream>

using namespace std;
int main(void)
{
    int n;
    cin >> n;
    long long int res = 1;
    for(int i=1;i<=n;i++)
        res *= (long long int)i;
    cout << res << endl;
    return 0;
}