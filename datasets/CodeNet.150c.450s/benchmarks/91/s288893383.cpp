#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
//素数かどうかが真のものの数（カウントアップ）を返す
int countup(vector<bool>::iterator begin, vector<bool>::iterator end) 
{
    int counter = 0;
    while (begin++ != end) {
        if (*begin) 
            counter++;
    }
    return counter;
}
int main()
{
    int n;
    
    while (cin >> n) {
        int                     max = sqrt(static_cast<double>(n));
        vector<bool>            is_prime(n, true);
        vector<bool>::iterator  begin, end;
 
        is_prime[0] = is_prime[1] = false;
        
        for (int i=2; i<=max; i++) {
            if (!is_prime[i]) {
                continue;
            }
            else { // iがもし素数だったら、(自分以外の)その倍数全部潰す
                for (int cntr = 2, j = 2*i; j<=n; j = i*(cntr++)) { 
                    is_prime[j] = false;
                }
            }
        }
        begin   = is_prime.begin();
        end     = is_prime.end();
        cout << countup(begin, end) << endl;
    }
}