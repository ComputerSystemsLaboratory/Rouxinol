#include <iostream>
#include <string>

using namespace std;

int main()
{
    int fibo[44], n, i;
    
    cin >> n;
    
    fibo[0] = 1;
    fibo[1] = 1;
    
    i = 0;
    while (i <= n) {
        if (i > 1) fibo[i] = fibo[i-2] + fibo[i-1];
        i++;
    }
    
    cout << fibo[n] << endl;
    
    return 0;
}
