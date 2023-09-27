#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char x[1001];
    while (true) {
        scanf("%s", x);
        if (strcmp(x, "0") == 0) break;
        int i = 0;
        int sum = 0;
        while (x[i]) {
            sum += x[i++] - '0';
        }
        cout << sum << endl;
    }
}