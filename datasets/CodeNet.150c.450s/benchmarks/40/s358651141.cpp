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
        int tmp;
        switch (direction) {
        case 'N':
            tmp = m_surface.at(0);
            m_surface.at(0) = m_surface.at(1);
            m_surface.at(1) = m_surface.at(5);
            m_surface.at(5) = m_surface.at(4);
            m_surface.at(4) = tmp;
            break;
        case 'S':
            tmp = m_surface.at(0);
            m_surface.at(0) = m_surface.at(4);
            m_surface.at(4) = m_surface.at(5);
            m_surface.at(5) = m_surface.at(1);
            m_surface.at(1) = tmp;
            break;
        case 'E':
            tmp = m_surface.at(0);
            m_surface.at(0) = m_surface.at(3);
            m_surface.at(3) = m_surface.at(5);
            m_surface.at(5) = m_surface.at(2);
            m_surface.at(2) = tmp;
            break;
        case 'W':
            tmp = m_surface.at(0);
            m_surface.at(0) = m_surface.at(2);
            m_surface.at(2) = m_surface.at(5);
            m_surface.at(5) = m_surface.at(3);
            m_surface.at(3) = tmp;
            break;
        }
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