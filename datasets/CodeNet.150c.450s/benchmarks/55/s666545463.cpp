#include<cstdio>
#include<cstring>

using namespace std;

int main() {
    while (true) {
        char x[1001];
        scanf("%s", x);
        if (x[0] == '0') break;
        int s = 0;
        for (int i = 0; i < strlen(x); i++) {
            s += x[i] - '0';
        }
        printf("%d\n", s);
    }
    return 0;
}
