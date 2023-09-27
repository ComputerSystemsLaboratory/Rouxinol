#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        int input;
        scanf("%d", &input);
        v.push_back(input);
    }
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < 3; i++) {
        printf("%d\n", v[i]);
    }
}