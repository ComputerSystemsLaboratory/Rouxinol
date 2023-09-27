#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    int n;
    while(1) {
        cin >> n;
        if (n == 0) return 0;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int sum = 0;
        for (int i = 1; i < n-1; i++) {
            sum += a[i];
        }
        cout << (int)sum/(a.size()-2) << endl;
    }
}