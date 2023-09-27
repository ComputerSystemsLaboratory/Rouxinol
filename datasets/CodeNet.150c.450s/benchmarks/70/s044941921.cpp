#include <cstdio>

using namespace std;

bool testcase_ends() {
    int m, d;
    scanf("%d %d", &m, &d);

    if (m == 0 && d == 0)
        return 1;

    int offset[]={
        0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335
    };

    const char *day[]={
        "Mon", "Tues", "Wednes", "Thurs", "Fri", "Satur", "Sun"
    };

    printf("%sday\n", day[(offset[m-1]+d+2)%7]);
    return 0;
}

int main() {
    int solved=0;
    while (!testcase_ends())
        ++solved;

    return !solved;
}