#include <iostream>
#include <stdio.h>

int main() {
    int time;
    int hour = 0;
    int min = 0;
    int sec = 0;

    std::cin >> time;
    sec = time % 60;
    time = time - sec;

    if (time > 0) {
        min = (time % (60 * 60)) / 60;
        time = time - min * 60;
    }

    if (time > 0) {
        hour = (time % (60 * 60 * 24)) / (60 * 60);
    }

    printf("%d:%d:%d\n", hour, min, sec);

    return 0;
}