#include <stdio.h>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int a;
    while (scanf("%d", &a) != EOF) {
        if (a != 0) v.push_back(a);
        else {
            printf("%d\n", v.back());
            v.pop_back();
        }
    }
    return 0;
}