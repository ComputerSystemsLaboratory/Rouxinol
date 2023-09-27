#include <iostream>

using namespace std;

int main()
{
    int n, a = 2;
    cin>>n;
    cout<<n<<":";
    while (a*a <= n && n > 1)
    {
        if (n % a == 0)
        {
            cout<<" "<<a;
            n = n/a;
        }
        else a++;
    }
    if (n > 1) cout<<" "<<n;
    cout<<"\n";
    return 0;
}