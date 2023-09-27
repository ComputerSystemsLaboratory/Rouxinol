#include <iostream>
using namespace std;

int main()
{
    bool notPrime[1000000]={false};
    notPrime[0]=notPrime[1]=true;
    for (unsigned i=3; i<1000000; i+=2) {
        if (!notPrime[i]) {
            for (unsigned j=2; i*j<1000000; j++) {
                notPrime[i*j]=true;
            }
        }
    }
    for (unsigned n, count; cin >> n; cout << count << endl) {
        count=0;
        if (n>=2) {
            count++;
            for (unsigned i=3; i<=n; i+=2) {
                if (!notPrime[i]) {
                    count++;
                }
            }
        }
    }
    return 0;
}