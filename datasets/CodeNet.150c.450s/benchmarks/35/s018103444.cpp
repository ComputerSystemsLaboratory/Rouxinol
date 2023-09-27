#include <iostream>

using namespace std;

int main() {
    int n = 0;
    while (cin>>n && n != 0) {
        int a[5001] = {};
        cin>>a[0];
        int max = a[0];
        for (int i = 1; i < n; i++) {
            cin>>a[i];
            if (a[i] >= 0) {
                int temp = 0;
                for (int s = i; s >= 0; s--) {
                    temp += a[s];
                    if (temp > max) max = temp;
                    if (temp < 0) break;
                }
            }
        }
        cout<<max<<endl;
    }
}