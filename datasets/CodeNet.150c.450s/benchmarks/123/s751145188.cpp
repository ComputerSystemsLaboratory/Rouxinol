#include <iostream>
#include <math.h>
#include<iomanip>
#include <string>
using namespace std;

bool isprime(int a)
{
    if (a==2) return true;
    if (a<2 || (a%2==0)) return false;

    int i=3;
    while(i <= sqrt(a)){
        if (a%i==0) return false;
        i=i+2;
    }
    return true;
}

int main() {
    int N;
    int count=0;
    cin >> N;

    for (int i=0;i<N;i++){
        int x;
        cin >> x;
        if (isprime(x)) count++;
    }

    cout << count << endl;
    return 0;
}