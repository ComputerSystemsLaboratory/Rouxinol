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
    void printFront();
    void printRight();
    void printLeft();
    void printBack();
    void printBotom();

    void TurnNorth();
    void TurnEast();
    void TurnSouth();
    void TurnWest();


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

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int vtop = 0;
        int vfro = 0;
        std::cin >> vtop;
        std::cin >> vfro;
        int count = 0;
        while(1) {
            if (vtop != dice->m_dice.front && count <= 4) {
                dice->TurnSouth();
                count++;
            } else if (vtop != dice->m_dice.front && count == 5) {
                dice->TurnEast();
                dice->TurnSouth();
                count++;
            } else if (vtop != dice->m_dice.front && count == 6) {
                dice->TurnSouth();
                dice->TurnSouth();
                count++;
            } else {
                count = 0;
                break;
            }
        }


        while(1) {
            if (vfro != dice->m_dice.botom) {
                dice->TurnEast();
            } else {
                break;
            }
        }

        dice->TurnNorth();
        dice->printRight();



    }



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

void Dice::printFront()
{
    std::cout << m_dice.front << std::endl;
}

void Dice::printRight()
{
    std::cout << m_dice.right << std::endl;
}

void Dice::printLeft()
{
    std::cout << m_dice.left << std::endl;
}

void Dice::printBack()
{
    std::cout << m_dice.back << std::endl;
}

void Dice::printBotom()
{
    std::cout << m_dice.botom << std::endl;
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
                  