#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0, n2 = 0;
    cin >> n;
    //n = atoi(argv[1]);
    if(n < 1 || n > 100) {
        return 1;
    }
    n2 = pow(n, 3.0);
    cout << n2 << endl;
}
