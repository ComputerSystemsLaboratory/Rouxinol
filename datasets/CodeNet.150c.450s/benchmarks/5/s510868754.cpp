#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n,i;
    
    cin >> n;
    int a[n];

    for(i=0;i<n;i++){
        cin >> a[i];
    }

    for(i=0;i<n;i++){
        if(i<(n-1)){
            cout << a[n-(i+1)] << " ";
        }
        else{
            cout << a[0] << endl;
        }
    }
    return 0;
}

