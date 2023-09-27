#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const* argv[])
{
    int n;
    int profit = -1E9;
    int max = 0;
    int min;
    cin >> n;
    vector<int> ary(n);
    for(auto& i: ary) {
        cin >> i;
    }
    min = ary[0];
    for(int i = 1; i < n; i++) {
        if ((ary[i] - min) > profit) {
            profit = ary[i] - min;
        }
        if (min > ary[i]) {
            min = ary[i];
            continue;
        }
    }
    std::cout << profit << std::endl;
}