#include <iostream>
#include <cstdio>
using namespace std;

bool LinearSearch(int vect[], int num, int key)
{
    int i;
    vect[num] = key;

    i = 0;
    while (vect[i] != key) {
        ++i;
    }

    return (i != num);
}

int main(void)
{
    int i;
    int vect[10000+1];
    int num, num2;
    int target;
    int cnt = 0;

    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        scanf("%d", &vect[i]);
    }
    scanf("%d", &num2);
    for (; num2 > 0; num2--) {
        scanf("%d", &target);
        if (LinearSearch(vect, num, target)) {
            ++cnt;
        }
    }

    printf("%d\n", cnt);
}