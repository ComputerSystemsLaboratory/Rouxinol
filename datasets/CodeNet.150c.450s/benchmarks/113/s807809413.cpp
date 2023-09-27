#include <iostream>


class data
{
private:
    int number;
    int data;

public:

    void set_number(int num) 
    {
        this->number = num;
    }

    void set_data(int dat) 
    {
        if (dat == 0) {
            this->number = 0;
        } else {
            this->data = dat;
        }
    }

    int get_number(void) 
    {
        return number;
    }

    int get_data(void)
    {
        return data;
    }

};

int main(void)
{
    data dataset;
    int num;

    for (num = 1; num > 0; ++num) {   
        int data;
        dataset.set_number(num);
        std::cin >> data;        
        dataset.set_data(data);
        if (dataset.get_number() == 0) {
            break;
        } else {
            std::cout << "Case " << dataset.get_number() << ": " << dataset.get_data() <<std::endl;
        }
    }
    return 0;
}