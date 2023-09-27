#include <iostream>
#define INF (2 >> 28)
using namespace std;

int main() {
    int before, after, sum;
    while(cin >> before >> after >> sum, before) {
        int maxi = INF;
        for(int i = 1; i < sum; i++) {
            for(int j = 1; j < sum; j++) {
                if(i + j > sum) break;
                if(i * (100 + before) / 100 + j * (100 + before) / 100 == sum) {
                    maxi = max(maxi, i * (100 + after) / 100 + j * (100 + after) / 100);
                }
            }
        }
        cout << maxi << endl;
    }
}