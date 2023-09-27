#include <stdio.h>

int main() {
    const int LENGH = 3;
    int mountains[10];

    for (int i = 0; i < 10; ++i) {
        scanf("%d", &mountains[i]);
    }

    {
        bool finished = false;
        while (!finished) {
            finished = true;

            for (int i = 0; i < 10 - 1; ++i) {
                if (mountains[i] < mountains[i + 1]) {
                    int temp = mountains[i + 1];
                    mountains[i + 1] = mountains[i];
                    mountains[i] = temp;
                    finished = false;
                }
            }
        }
    }

    for (int i = 0; i < LENGH; ++i) {
        printf("%d\n", mountains[i]);
    }
}