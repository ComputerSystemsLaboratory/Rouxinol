#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int a){
    if (a == 1) return false;
    if (a == 2) return true;
    if (a % 2 == 0) return false;
    int sqrta = static_cast<int>(sqrt(a));
    for (int i=3; i<=sqrta; i+=2){
        if (a % i == 0) return false;
    }
    return true;
}

int main()
{
    int N = 0;
    cin >> N;
    int counter = 0;
    for (int i = 0; i != N; ++i){
        int a = 0;
        cin >> a;
        if (isPrime(a)) ++counter;
    }
    cout << counter << endl;
    return 0;
}