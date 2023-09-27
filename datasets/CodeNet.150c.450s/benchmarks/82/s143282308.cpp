/*
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_11_B
 */
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Die
{
    enum fname {
        top, front, right, left, back, bottom,
    };

    vector<int> faces;
    map<fname, int> f2i;

    void
    turn_e() {
        int tmp = f2i[top];
        f2i[top] = f2i[left];
        f2i[left] = f2i[bottom];
        f2i[bottom] = f2i[right];
        f2i[right] = tmp;
    }

    void
    turn_n() {
        int tmp = f2i[top];
        f2i[top] = f2i[front];
        f2i[front] = f2i[bottom];
        f2i[bottom] = f2i[back];
        f2i[back] = tmp;
    }

    void
    turn_s() {
        int tmp = f2i[top];
        f2i[top] = f2i[back];
        f2i[back] = f2i[bottom];
        f2i[bottom] = f2i[front];
        f2i[front] = tmp;
    }

    void
    turn_w() {
        int tmp = f2i[top];
        f2i[top] = f2i[right];
        f2i[right] = f2i[bottom];
        f2i[bottom] = f2i[left];
        f2i[left] = tmp;
    }

public:
    Die()
    {
        faces.reserve(6);

        f2i.emplace(top, 0);
        f2i.emplace(front, 1);
        f2i.emplace(right, 2);
        f2i.emplace(left, 3);
        f2i.emplace(back, 4);
        f2i.emplace(bottom, 5);
    }

    ~Die()
    {
        faces.clear();
        f2i.clear();
    }

    void
    read_faces(istream &is) {
        for (int i = 0; i < 6; i++) {
            is >> faces[i]; is.ignore();
        }
    }

    void
    top_front(const int t, const int f) {
        const string aface = "NENEN";
        for (auto it = aface.cbegin(); faces[f2i[top]] != f; it++) {
            turn(*it);
        }
        turn_s();
        const string roll = "EEE";
        for (auto it = roll.cbegin(); faces[f2i[top]] != t; it++) {
            turn(*it);
        }
    }

    void
    turn(const char c) {
        switch (c) {
          case 'N':
            turn_n();
            break;
          case 'E':
            turn_e();
            break;
          case 'S':
            turn_s();
            break;
          case 'W':
            turn_w();
            break;
        }
    }

    int Top()    { return faces[f2i[top]   ]; }
    int Front()  { return faces[f2i[front] ]; }
    int Right()  { return faces[f2i[right] ]; }
    int Left()   { return faces[f2i[left]  ]; }
    int Back()   { return faces[f2i[back]  ]; }
    int Bottom() { return faces[f2i[bottom]]; }
};

int
main()
{
    ios::sync_with_stdio(false);

    Die d;
    d.read_faces(cin);

    int n;
    cin >> n; cin.ignore();

    for (int i = 0; i < n; i++) {
        int t, f;
        cin >> t >> f; cin.ignore();
        d.top_front(t, f);
        cout << d.Right() << endl;
    }

    return 0;
}