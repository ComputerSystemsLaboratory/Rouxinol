#include <iostream>
#include <cstdio>

using namespace std;

void call(int n)
{
    for (int i=1; i<=n; i++) {
        // Check num
        int x = i;
        if (x % 3 == 0) {
            cout << " " << i;
            if (i > n)
                break;
            else
                continue;
        }

        while (x) {
            if (x % 10 == 3) {
                cout << " " << i;
                break;
            }
            x /= 10;
        }
    }
    printf("\n");
}

int main(void)
{
    int n;
    scanf("%d", &n);
    call(n);
}