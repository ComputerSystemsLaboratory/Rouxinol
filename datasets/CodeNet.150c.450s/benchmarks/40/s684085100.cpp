#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

class Dice {
public:
    Dice(int i_one, int i_two, int i_three, int i_four, int i_five, int i_six)
      : one(i_one)
      , two(i_two)
      , three(i_three)
      , four(i_four)
      , five(i_five)
      , six(i_six)
    {
    }

    inline void E() noexcept
    {
        int buf_one   = this->one;
        int buf_three = this->three;
        int buf_four  = this->four;
        int buf_six   = this->six;

        this->one   = buf_four;
        this->three = buf_one;
        this->four  = buf_six;
        this->six   = buf_three;
    }

    inline void N() noexcept
    {
        int buf_one   = this->one;
        int buf_two   = this->two;
        int buf_five  = this->five;
        int buf_six   = this->six;

        this->one   = buf_two;
        this->two   = buf_six;
        this->five  = buf_one;
        this->six   = buf_five;
    }

    inline void S() noexcept
    {
        int buf_one   = this->one;
        int buf_two   = this->two;
        int buf_five  = this->five;
        int buf_six   = this->six;

        this->one   = buf_five;
        this->two   = buf_one;
        this->five  = buf_six;
        this->six   = buf_two;

    }

    inline void W() noexcept
    {
        int buf_one   = this->one;
        int buf_three = this->three;
        int buf_four  = this->four;
        int buf_six   = this->six;

        this->one   = buf_three;
        this->three = buf_six;
        this->four  = buf_one;
        this->six   = buf_four;
    }

    inline void print() noexcept
    {
        std::cout << this->one << std::endl;
    }

private:
    int one;
    int two;
    int three;
    int four;
    int five;
    int six;
};

int main()
{
    int one, two, three, four, five, six;
    std::cin >> one >> two >> three >> four >> five >> six;
    Dice dice(one, two, three, four, five, six);

    std::string command;
    std::cin >> command;

    for (std::size_t i = 0; i < command.length(); ++i) {
        switch (command[i]) {
        case 'E':
        {
            dice.E();
            break;
        }
        case 'N':
        {
            dice.N();
            break;
        }
        case 'S':
        {
            dice.S();
            break;
        }
        case 'W':
        {
            dice.W();
            break;
        }
        default:
        {
            break;
        }
        }
    }

    dice.print();

    return 0;
}
