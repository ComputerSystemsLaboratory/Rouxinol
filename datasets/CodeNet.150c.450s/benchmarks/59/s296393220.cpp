#include <iostream>

using namespace std;

int main() {
    int i,j,k,v,n,a[100];

    cin >> n;

    for(i = 0;i < n;i++){
        cin >> a[i];
    }

    for(i = 1;i <= n-1;i++){
        for(k = 0;k < n - 1;k++){
            cout << a[k] << ' ';
        }
        cout << a[k] << endl;
        
        v = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > v){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = v;
    }

    for(i = 0;i < n - 1;i++){
        cout << a[i] << ' ';
    }
    cout << a[i] << endl;

    return 0;
}