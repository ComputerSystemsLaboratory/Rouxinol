#include <cstdio>
#include <string>

using namespace std;

struct Dice {
    int face[6];
    const int dir[5][6]={
        {1, 5, 2, 3, 0, 4},
        {3, 1, 0, 5, 4, 2},
        {4, 0, 2, 3, 5, 1},
        {2, 1, 5, 0, 4, 3},
        {0, 2, 4, 1, 3, 5}
    };
    const char dchars[6]="NESWY";
    int encode[256]={};
    Dice(int f[6]) {
        for (size_t i=0; i<6; ++i)
            face[i] = f[i];

        for (size_t i=0; i<5; ++i)
            encode[dchars[i]+0] = i;
    }
    void roll(char d) {
        int tmp[6]={};
        for (size_t i=0; i<6; ++i)
            tmp[i] = face[i];

        for (size_t i=0; i<6; ++i)
            face[i] = tmp[dir[encode[d+0]][i]];
    }
    void yaw() {
        roll('Y');
    }
    void flip() {
        roll('N'), roll('N');
    }
    int top() {
        return face[0];
    }
    int front() {
        return face[1];
    }
    int right() {
        return face[2];
    }
    int back() {
        return face[3];
    }
    int left() {
        return face[4];
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

    size_t q;
    scanf("%zu", &q);

    for (size_t i=0; i<q; ++i) {
        int t, f;
        scanf("%d %d", &t, &f);

        // fix top face
        if (d.bottom() == t) {
            d.flip();
        } else if (d.top() != t) {
            while (d.front() != t) d.yaw();
            d.roll('N');
        }

        // fix front face
        while (d.front() != f)
            d.yaw();

        printf("%d\n", d.right());
    }

    return 0;
}