#include<iostream>
#include<algorithm>
using namespace std;

bool IsPrime[1000000];
int PrimeNum[1000000];

int main()
{
    for (int i = 0; i < 1000000; i++)
    {
        IsPrime[i] = true;
    }
    int count = 0;
    PrimeNum[0] = PrimeNum[1] = 0;
    for (int i = 2; i < 1000000; i++) {
        if (IsPrime[i]) {
            count++;
            PrimeNum[i] = count;
            for (int j = 2 * i; j < 1000000; j += i) {
                IsPrime[j] = false;
            }
        }
        else
        {
            PrimeNum[i] = PrimeNum[i - 1];
        }
    }
    int n;
    while (cin >> n)
    {
        cout << PrimeNum[n] << endl;
    }
    return 0;
}