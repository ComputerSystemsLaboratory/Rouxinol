#include <iostream>

using namespace std;

int sum_of_2_integers(int n) {
        int a,b;
        int count = 0;
        for (a=0; a < 10; a++) {
                b = n - a;
                if (b < 0) break;
                if (b <= 9) count++;
        }
        return count;
}

int sum_of_4_integers(int n) {
        int a,b;
        int count = 0;
        for (a=0; a <= 18; a++) {
                b = n - a;
                if (b < 0) break;
                if (b <= 18) {
                        count = count + sum_of_2_integers(a)*sum_of_2_integers(b);
                }
        }
        return count;
}

int main(void) {
        int n;
        while(cin >> n) {
                cout << sum_of_4_integers(n);
                cout << endl;
        }

        return 0;
}