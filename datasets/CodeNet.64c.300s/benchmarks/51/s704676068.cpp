#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
// int is too small for this calcuration
// so i used long.
// have a nice hhk!!

int main()
{
    unsigned long n;
    unsigned long ans = 1;
    cin >> n;
    for(int c = n; c > 1; c--)
    {
        ans *=c;
    }
    cout << ans << endl;
    return EXIT_SUCCESS;
}