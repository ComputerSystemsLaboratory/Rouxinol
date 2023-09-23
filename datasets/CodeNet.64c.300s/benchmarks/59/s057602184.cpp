#include<iostream>
using namespace std;
#include<cmath>

bool IsPrime(int m)
{
    for(int i = 2; i <= sqrt(m * 1.0); i++){
        if(m % i == 0) return false;
    }
    return true;
}

int main()
{
    int i, n, a[10000], count;
    cin >> n;
    for(i = 0; i < n; i++) cin >> a[i];

    count = 0;
    for(i = 0; i < n; i++){
        if(IsPrime(a[i])) count++;
    }
    cout << count << endl;

    return 0;
}