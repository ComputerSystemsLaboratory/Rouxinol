/*
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_11_A
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
    load_faces(const vector<int> v) {
        copy(v.begin(), v.begin() + 6, faces.begin());
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
    vector<int> v(6);
    for (int i = 0; i < 6; i++) {
        cin >> v[i]; cin.ignore();
    }
    d.load_faces(v);
    v.clear();

    string line;
    getline(cin, line);
    for (auto &it : line) {
        d.turn(it);
    }
    cout << d.Top() << endl;

    return 0;
}