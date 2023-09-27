#include <iostream>

class data
{
private:
    int x;
    int y;

public:
    void set_x(int x)
    {
        this->x = x;
    }

    void set_y(int y)
    {
        this->y = y;
    }

    int get_x(void)
    {
        return this->x;
    }

    int get_y(void)
    {
        return this->y;
    }
    
    void swapping(void)
    {
        if (this->x > this->y) {
            int tmpx = this->x;
            this->x = this->y;
            this->y = tmpx;
        }
    }

};

int main(void)
{
    int x, y;
    data dataset;
    while(true) {
        std::cin >> x;
        std::cin >> y;
        if(x == 0 && y == 0) {
            break;
        }
        dataset.set_x(x);
        dataset.set_y(y);
        dataset.swapping();
        std::cout << dataset.get_x() << " " << dataset.get_y() << std::endl;
    }
    return 0;
}