#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

long fact(int n);

int main(void)
{
    int n;
    
    cin >> n;
    cout << fact(n) << endl;
    
    return 0;
}

long fact(int n)
{
    if(n == 1) return 1;
    else return fact(n-1) * n;
}