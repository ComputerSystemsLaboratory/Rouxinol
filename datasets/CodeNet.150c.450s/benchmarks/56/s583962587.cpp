#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n; cin >> n;
    int amin = INT_MAX, amax = INT_MIN;
    long sum = 0;
    
    while(n--) {
        int x; cin >> x;
        amin = (x<amin) ? x : amin;
        amax = (x>amax) ? x : amax;
        sum += x;
    }
    
    cout << amin << ' ' << amax << ' ' << sum << endl;
    
    return 0;
}
