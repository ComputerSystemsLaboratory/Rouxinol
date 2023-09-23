#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    int num[n-1];

    for (int i = 0; i < n; ++i)
    {
        cin >> num[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (i) cout << " ";
        cout << num[n-1-i];
    }
    cout << endl;
}