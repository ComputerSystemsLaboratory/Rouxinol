#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
    int a, b, c;
    int n=0;
    cin >> a >> b >> c;

    for (int i = 1; i <= c; i++)
    {
        if(c%i==0 && i>=a && i<=b) n++;
    }
    cout << n << endl;
    return 0;
}


