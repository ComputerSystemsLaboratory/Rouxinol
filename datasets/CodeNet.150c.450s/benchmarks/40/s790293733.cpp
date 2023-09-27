#include <iostream>
#include <array>
#include <string>

using namespace std;

constexpr int SURFACE_NUM = 6;
enum {TOP, FRONT, RIGHT, LEFT, BACK, BOTTOM};

class Dice {
private:
    array<int, SURFACE_NUM> m_surface;

public:
    // constructor
    Dice(array<int, SURFACE_NUM> surface)
        : m_surface(surface) {}

    // getter
    int surface(int i) const
    {
        return m_surface.at(i);
    }

    // roll
    void roll(char direction)
    {
        switch (direction) {
        case 'N':
            roll(TOP, FRONT, BOTTOM, BACK);
            break;
        case 'S':
            roll(TOP, BACK, BOTTOM, FRONT);
            break;
        case 'E':
            roll(TOP, LEFT, BOTTOM, RIGHT);
            break;
        case 'W':
            roll(TOP, RIGHT, BOTTOM, LEFT);
            break;
        }
    }

    void roll(int i, int j, int k, int l)
    {
        int tmp = m_surface.at(i);
        m_surface.at(i) = m_surface.at(j);
        m_surface.at(j) = m_surface.at(k);
        m_surface.at(k) = m_surface.at(l);
        m_surface.at(l) = tmp;
    }

    // debug
    void printDice() const
    {
        cout << surface(TOP) << surface(FRONT)
             << surface(RIGHT) << surface(LEFT)
             << surface(BACK) << surface(BOTTOM) << endl;
    }
};

int main()
{
    array <int, SURFACE_NUM> init;
    for (auto i = 0; i < SURFACE_NUM; i++) {
        cin >> init.at(i);
    }
    Dice one(init);

    string op;
    cin >> op;
    for (auto i = 0; i < op.size(); i++) {
        char direction = op.at(i);
        one.roll(direction);
    }

    cout << one.surface(TOP) << endl;;
}