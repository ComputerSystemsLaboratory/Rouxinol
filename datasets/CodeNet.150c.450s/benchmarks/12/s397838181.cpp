#include<iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n];

    for( int i = 0; i < n; i++ )
        cin >> a[i];

    bool j1 = false, j2 = false, j3 = false;
    for( int i = 0; i < n; i++ )
    {
        j1 = i == 0 ? 0: 1;
        j2 = i * 2 + 1 < n ? 1: 0;
        j3 = i * 2 + 2 < n ? 1: 0;
        
        cout << "node " << i + 1 << ": key = " << a[i] << ", ";
        if(j1)
            cout << "parent key = " << a[(i-1)/2] << ", ";
        if(j2)
            cout << "left key = " << a[i*2+1] << ", ";
        if(j3)
            cout << "right key = " << a[i*2+2] << ", ";
        cout << endl;
    }

    return 0;
}

