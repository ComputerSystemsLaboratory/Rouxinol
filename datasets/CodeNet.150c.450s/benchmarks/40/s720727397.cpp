#include <iostream>
#include <array>
#include <string>

using namespace std;

constexpr int SURFACE_NUM = 6;

class Dice {
private:
    array<int, SURFACE_NUM> m_surface;

public:
    explicit Dice(array<int, SURFACE_NUM> surface)
        : m_surface(surface) {}

    int surface(int i) const
    {
        return m_surface.at(i);
    }

    void roll(char direction)
    {
        switch (direction) {
        case 'N':
            roll(0, 1, 5, 4);
            break;
        case 'S':
            roll(0, 4, 5, 1);
            break;
        case 'E':
            roll(0, 3, 5, 2);
            break;
        case 'W':
            roll(0, 2, 5, 3);
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

    cout << one.surface(0) << endl;;
}