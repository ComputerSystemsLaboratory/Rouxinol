#include <iostream>
#include <iomanip>
#include <string>

namespace Simulation
{

class Dice
{
public:
    struct DiceStruct{
        int top;
        int front;
        int right;
        int left;
        int back;
        int botom;

        //?????¢????????§???
        int current;
    };

    void set(int a, int b, int c, int d, int e, int f);
    void printTop();

    void TurnNorth();
    void TurnEast();
    void TurnSouth();
    void TurnWest();

private:
    DiceStruct m_dice{0,0,0,0,0,0,0};
}; //namespace Dice


std::unique_ptr<Dice> dice(new Dice());

} //namespace Simulation 

int main()
{
    using namespace Simulation;

    int a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;

    dice->set(a, b, c, d, e, f);


    std::string order = "";
    std::cin >> order;

    for (int i = 0; i < order.length(); i++) {
        if (order[i] == 'N') {
            dice->TurnNorth();
        }

        if (order[i] == 'S') {
            dice->TurnSouth();
        }

        if (order[i] == 'W') {
            dice->TurnWest();
        }

        if (order[i] == 'E') {
            dice->TurnEast();
        }
    }

    dice->printTop();

    return 0;
}

namespace Simulation
{

void Dice::set(int a, int b, int c, int d, int e, int f)
{
    m_dice.top = a;
    m_dice.front = b;
    m_dice.right = c;
    m_dice.left = d;
    m_dice.back = e;
    m_dice.botom = f;

}

void Dice::printTop()
{
    std::cout << m_dice.top << std::endl;
}

void Dice::TurnNorth()
{
    m_dice.current = m_dice.top;
    m_dice.top = m_dice.front;
    m_dice.front = m_dice.botom;
    m_dice.botom = m_dice.back;
    m_dice.back = m_dice.current;
    m_dice.current = 0;
}

void Dice::TurnEast()
{
    m_dice.current = m_dice.top;
    m_dice.top = m_dice.left;
    m_dice.left = m_dice.botom;
    m_dice.botom = m_dice.right;
    m_dice.right = m_dice.current;
    m_dice.current = 0;
}

void Dice::TurnSouth()
{
    m_dice.current = m_dice.top;
    m_dice.top = m_dice.back;
    m_dice.back = m_dice.botom;
    m_dice.botom = m_dice.front;
    m_dice.front = m_dice.current;
    m_dice.current = 0;
}

void Dice::TurnWest()
{
    m_dice.current = m_dice.top;
    m_dice.top = m_dice.right;
    m_dice.right = m_dice.botom;
    m_dice.botom = m_dice.left;
    m_dice.left = m_dice.current;
    m_dice.current = 0;
}

}//namespace Simulation