#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;


    while(cin >> n, n != 0){
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int minimum = 0;
        int x = 0;
        int maximum = -9999999;
        for(int i=0; i<a.size(); i++){
            x += a[i];
            maximum = max(maximum, x-minimum);
            minimum = min(minimum, x);
        }

        cout << maximum << endl;

    }

    return 0;
}