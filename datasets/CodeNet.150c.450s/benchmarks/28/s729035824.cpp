#include <cstdio>
#include <iostream>
using namespace std;

static const int MAX_NUM    = 100000;
static const int MAX_WEIGHT =  10000;
static const long long MAX_POWER = MAX_NUM * MAX_WEIGHT;

int main(void)
{
    int i;
    int car;
    int num_cabin;
    int num_car;
    int cabin[MAX_NUM];
    long long remain;
    int right, left, mid;

    scanf("%d", &num_cabin);
    scanf("%d", &num_car);

    for (i = 0; i < num_cabin; i++) {
        scanf("%d", &cabin[i]);
    }

    left  = 0;
    right = MAX_POWER;
    while (left <= right) {
        mid = (right + left) / 2;
        car    = 1;
        remain = mid;

        for (i = 0; i < num_cabin; i++) {
            if (remain >= cabin[i]) {
                remain -= cabin[i];
            }
            else {
                ++car;
                remain = mid - cabin[i];
                if (remain < 0) {
                    car = MAX_NUM + 1;
                    break;
                }
            }
        }
        if (left == right) {
            break;
        }
        if (car <= num_car) {
            right = mid;
        }
        else {
            left = mid + 1;
        }
    }

    printf("%d\n", mid);

    return 0;
}