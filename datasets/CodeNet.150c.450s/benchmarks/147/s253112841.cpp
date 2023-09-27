#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<int> nums(N + 1);
    int n;
    for (int i = 1; i <= 10000; i++) {
        for (int j = 1; j <= 10000; j++) {
            for (int k = 1; k <= 10000; k++) {
                n = pow(i + j + k, 2) - i*j - j*k - k*i;
                if (n > N) break;
                nums[n]++;
            }
        }
    }
    for (int i = 1; i <= N; i++) cout << nums[i] << endl;
}
