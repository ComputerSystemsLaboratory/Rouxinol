#include <iostream>
using namespace std;

class Dice
{
private:
    int l1, l2, l3, l4, l5, l6;
public:
    Dice(int l1, int l2, int l3, int l4, int l5, int l16);
    void n();
    void w();
    void e();
    void s();
    void print();
};

Dice::Dice(int a, int b, int c, int d, int e, int f)
{
    l1 = a;
    l2 = b;
    l3 = c;
    l4 = d;
    l5 = e;
    l6 = f;
}

void Dice::n()
{
    int temp;

    temp = l1;
    l1 = l2;
    l2 = l6;
    l6 = l5;
    l5 = temp;
}

void Dice::w()
{
    int temp;

    temp = l1;
    l1 = l3;
    l3 = l6;
    l6 = l4;
    l4 = temp;
}

void Dice::e()
{
    int temp;

    temp = l1;
    l1 = l4;
    l4 = l6;
    l6 = l3;
    l3 = temp;
}

void Dice::s()
{
    int temp;

    temp = l1;
    l1 = l5;
    l5 = l6;
    l6 = l2;
    l2 = temp;
}

void Dice::print()
{
    cout << l1 << endl;
}

int main()
{
    int l1, l2, l3, l4, l5, l6;
    string str;

    cin >> l1 >> l2 >> l3 >> l4 >> l5 >> l6 >> str;

    Dice dice(l1, l2, l3, l4, l5, l6);

    for (int i = 0; i < (int)str.size(); i++) {
        if (str[i] == 'N') {
            dice.n();
        } else if (str[i] == 'E') {
            dice.e();
        } else if (str[i] == 'W') {
            dice.w();
        } else {
            dice.s();
        }
    }
    dice.print();

    return 0;
}