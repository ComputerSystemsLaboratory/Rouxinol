
#include <iostream>
#include <limits.h>
 
using namespace std;
 
const int N = 2e5;
int r[N];
 
int main()
{
    int n;
 
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> r[i];
 
    int maxval = INT_MIN;
    int minval = r[0];
    for(int i=1; i<n; i++) {
        maxval = max(maxval, r[i] - minval);
        minval = min(minval, r[i]);
    }
 
    cout << maxval << endl;
 
    return 0;

}
