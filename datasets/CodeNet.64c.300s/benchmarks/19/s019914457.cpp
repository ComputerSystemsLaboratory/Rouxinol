#include <iostream>
using namespace std;

int main(){
    int a[5000], n, i, j;
    while (cin >> n && 1 <= n && n <= 5000){
        int maximum = -100000;
        for(i = 0; i < n; i++){
            cin >> a[i];
         }
        for(i = 0; i < n; i++){
            int sum = 0;
            for (j = i; j < n; j++){
                sum += a[j];
                maximum = max(maximum, sum);
            }
        }
        cout << maximum << endl;
    }
}