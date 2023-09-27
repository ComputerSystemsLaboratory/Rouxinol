#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void numberOfWay(int n, int x) {
    int num = 0;
    int first;
    int second;
    int third;
    for (first = 1; first <= n - 2; first++) {
        third = x - first; 
        for (second = first + 1; second <= n - 1; second++) {
            int third_temp = third - second;
            if (first < second && second < third_temp && third_temp <= n) {
                num++;
            }
        }
    }
    cout << num << endl;
}

int main(void) {
    int n;
    int x;
    cin >> n >> x;
    while (n != 0 || x != 0) {
        numberOfWay(n , x); 
        cin >> n >> x;
    }
    return 0;
}