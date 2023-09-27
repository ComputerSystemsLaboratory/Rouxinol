#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r;
    while(cin >> n >> r) {
        if(n == 0 && r == 0) break;
        vector<int> array(51); for(int i=0; i<n; i++) array[i] = n-i;
        vector<int> temp(51);
        for(int i=0; i<r; i++) {
            int a, b;
            cin >> a >> b;
            a--;
            
            int x = 0, y = b;
            for(int j=0; j<n; j++) {
               if(j < a || a + b - 1 < j) {
                   temp[y] = array[j];
                   y++;
               }
               else {temp[x] = array[j]; x++;}
            }
            
            for(int j=0; j<n; j++) array[j] = temp[j];
            // for(int j=0; j<n; j++) cout << array[j] << " ";
            // cout << endl;
        }
        cout << array[0] << endl;
    }
    return 0;
}