#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a,b;
    cin >> a;
    if (1 <= a && a <= 100)
    {
        b = a * a * a;
        cout << b << endl;
    }
}