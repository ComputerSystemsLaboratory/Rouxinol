#include <iostream>
using namespace std;
int main(void){
    int n;
    while (cin >> n && n) {
        int count = 0;
        int end = (n + 1) / 2;
        for (int start = 1; start < end; ++start) {
            int sum = start;
            for (int i = start + 1; i <= end; ++i) {
                count += (sum += i) == n;
                if (sum >= n) break;
            }
        }
        cout << count << endl;
    }
}