#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a < b) {
        printf("a < b");
    } else if (a > b) {
        printf("a > b");
    } else {
        printf("a == b");
    }

    printf("\n");

/***
    int h = S / (60 * 60);
    int m = (S - h * (60 * 60)) / 60;
    int s = S % 60;

    cout << h << ':' << m << ':' << s;


    //scanf("%d %d", &a, &b);
    //cin >> a >> b;
    //c = a + b;
    //cout << a << " + " << b << " = " << c << '\n';
    //printf("%d %d\n", a * b, 2 * (a + b));
***/

    return 0;
}