#include <cstdio>
#include <string>

using namespace std;

struct Dice {
    int face[6];
    const int dir[4][6]={
        {1, 5, 2, 3, 0, 4},
        {3, 1, 0, 5, 4, 2},
        {4, 0, 2, 3, 5, 1},
        {2, 1, 5, 0, 4, 3}
    };
    const char dchars[5]="NESW";
    int encode[256]={};
    Dice(int f[6]) {
        for (size_t i=0; i<6; ++i)
            face[i] = f[i];

        for (size_t i=0; i<4; ++i)
            encode[dchars[i]+0] = i;
    }
    void roll(char d) {
        int tmp[6]={};
        for (size_t i=0; i<6; ++i)
            tmp[i] = face[i];

        for (size_t i=0; i<6; ++i)
            face[i] = tmp[dir[encode[d+0]][i]];
    }
    int top() {
        return face[0];
    }
    int bottom() {
        return face[5];
    }
};

int main() {
    int f[6];
    for (size_t i=0; i<6; ++i)
        scanf("%d", &f[i]);

    Dice d(f);

    char buf[1<<7];
    scanf("%s", buf);
    string dir(buf);
    for (char c: dir)
        d.roll(c);

    printf("%d\n", d.top());
    return 0;
}