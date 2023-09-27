#include <iostream>
using namespace std;
int w[100005];
int n, k = 0; //货物数量 和 卡车数量

//可以装载多少件货物，p为给定最大运载量
int check(long long p) {
    int i = 0;  //w[]的指针
    //对于每一辆卡车
    for (int j = 0 ; j < k; j++) {
        long long sum = 0;
        while (p - sum >= w[i]) {
            sum += w[i];
            i++;
            //注意这个边界条件
            if (i == n) {
                return n;
            }
        }
    }
    return i;
}

int resolve() {
    long long left = 0;
    long long right = 100000 * 10000;  //全都装一辆车上
    long long mid;
    while (right - left > 1) {
        mid = (left + right) / 2;
        int v = check(mid);
        if (v >= n) {
            right = mid;
        }
        else {
            left = mid;
        }
    }
    return right;
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    long long res = resolve();
    cout << res << endl;
    return 0;
}
