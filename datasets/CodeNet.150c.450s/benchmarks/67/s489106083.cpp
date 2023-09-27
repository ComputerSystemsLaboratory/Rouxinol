#include <iostream>
using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}

int main() {

    int comb,e;
    while(cin >> e && e > 0)
    {
        comb = 0;

        int max_comb = 0, counter = 0;
        for(int i = 1;;i++)
        {
            max_comb += i;
            counter++;
            if(e < max_comb)
                break;
        }
        
        for(int i = 2; i<counter;i++)
        {
            if(i%2 == 0)
            {
                if(e%i != 0 && e*2 % i == 0 && 1.0*e/i > i/2.0)
                {
                    comb++;
                }
                
            }
            else
            {
                if(e%i == 0 && e/i > i /2.0)
                {
                    comb++;
                }
            }
        }
        
        
        cout << comb << endl;
    }
    return 0;
}