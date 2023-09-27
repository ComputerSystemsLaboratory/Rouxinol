#include<cstdio>
#include<algorithm>
using namespace std;

int digit[5];

int main() {
    for (int i = 0; i < 5; i++) {
        scanf("%d", &digit[i]);
    }
    sort(digit, digit+5);
    for (int i = 4; i> -1; i--) {
        if (i == 0) {printf("%d\n", digit[i]);}
        else {printf("%d ", digit[i]);}
    }
    return 0;
}