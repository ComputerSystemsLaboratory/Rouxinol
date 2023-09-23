#include <iostream>

using namespace std;

int main() {
    int n,i,j,v,count = 0;
    int a[100];

    cin >> n;

    for(i = 0;i < n;i++){
        cin >> a[i];
    }

    for(i = 0;i < n - 1;i++){
        for(j = n - 1;j > i;j--){
            if(a[j] < a[j - 1]){
                count++;
                v = a[j];
                a[j] = a[j - 1];
                a[j - 1] = v;
            }
        }
    }

    for(i = 0;i < n - 1;i++){
        cout << a[i] << ' ';
    }
    cout << a[i] << endl << count << endl;
    
    return 0;
}