#include<iostream>

using namespace std;

long fac(int n)
{
    long res = 1;
    for(int i = n; i > 0; i--)
        res = res * i;
    return res;
}

int main()
{
    int n;
    cin >> n;

    if(n < 1 || n > 20)
        cout << "Error" << endl;
    else
        cout << fac(n) << endl;

    return 0;
} 