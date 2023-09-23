#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int ret = 100000;
    for (int i = 0; i < n; i++) {
        ret += ret * 0.05;
        if (ret%1000) {
            ret = ret - ret % 1000 + 1000;
        }
    }
    cout<<ret<<endl;
    return 0;
}