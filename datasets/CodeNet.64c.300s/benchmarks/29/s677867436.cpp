#include<iostream>
#include<cmath>

using namespace std;

int rt(int pow, int n) {
    int min = 0;
    int max = 1000;
    while (min < max) {
        int mid = (min + max + 1) / 2;
        int val = mid;
        for (int i = 1; i < pow; ++i) {
            val *= mid;
        }
        if (val > n) {
            max = mid - 1;
        } else {
            min = mid;
        }
    }
    return max;
}

int main() {
    //cout << rt(2, 4) << endl;
    //cout << rt(3, 7) << endl;
    
    
    while (1) {
        int e;
        cin >> e;

        if(e == 0) break;

        int m = 10000000;
        int zmax = rt(3, e);
        for (int z = 0; z <= zmax; ++z) {
            int y = rt(2, e - z * z * z);
            int x = e - z * z * z - y * y;
            if (m > x + y + z) m = x + y + z;
        }
        cout << m << endl;
        
    }
}