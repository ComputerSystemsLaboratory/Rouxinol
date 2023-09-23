#include <iostream>

bool judge(int x, int y, int z);

int main()
{
    int data_num;
    std::cin >> data_num;

    int side1, side2, side3;
    while (data_num--) {
        std::cin >> side1 >> side2 >> side3;
        std::cout << (judge(side1, side2, side3)? "YES": "NO") << std::endl;
    }

    return 0;
}

int pow2(int x);

bool judge(int x, int y, int z)
{
    if (pow2(x) == pow2(y) + pow2(z)) {
        return true;
    } else if (pow2(y) == pow2(z) + pow2(x)) {
        return true;
    } else if (pow2(z) == pow2(x) + pow2(y)) {
        return true;
    } else {
        return false;
    }
}

int pow2(int x)
{
    return (x * x);
}