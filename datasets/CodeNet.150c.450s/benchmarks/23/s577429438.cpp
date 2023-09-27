#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int F[50];
    F[0] = F[1] = 1;

    for(int i=2; i<=n; i++) F[i] = F[i-1] + F[i-2];
    cout << F[n] << endl;

    return 0;
}

