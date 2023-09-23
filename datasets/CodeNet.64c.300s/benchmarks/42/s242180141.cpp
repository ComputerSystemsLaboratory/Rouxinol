#include <iostream>
#include <vector>

using namespace std;

struct Point
{
    int x_, y_;
    Point() : x_(0), y_(0){}
    Point(const int &x, const int &y) : x_(x), y_(y){}
    Point(const Point &pt)
    {
        x_ = pt.x_;
        y_ = pt.y_;

    }
    void setPoint(const int &x, const int &y)
    {
        x_ = x;
        y_ = y;
    }

};

void updateJewelMap(bool jewel_map[21][21], Point &current_position, const char &direction, const int &step)
{
    for(int i = 0; i < step; i++)
    {
        switch(direction)
        {
        case 'N':
            current_position.y_++;
            break;
        case 'S':
            current_position.y_--;
            break;
        case 'E':
            current_position.x_++;
            break;
        case 'W':
            current_position.x_--;
            break;
        }
        jewel_map[current_position.y_][current_position.x_] = false;
    }
}

bool isGetAllJewel(const bool jewel_map[21][21], const int &width, const int &height)
{
    for(int h = 0; h < height; h++)
    {
        for(int w = 0; w < width; w++)
        {
            if(jewel_map[h][w]){ return false; }
        }
    }
    return true;
}

int main()
{
    bool jewel_map[21][21];
    Point initial_position(10, 10);

    int num_jewel = 0;
    int num_order = 0;

    while(true)
    {
        cin >> num_jewel;
        if(num_jewel == 0){ break; }

        //Initialize jewel map
        for(int h = 0; h < 21; h++)
        {
            for(int w = 0; w < 21; w++)
            {
                jewel_map[h][w] = false;
            }
        }

        //Map jewel positions
        int x, y;
        for(int i = 0; i < num_jewel; i++)
        {
            cin >> x >> y;
            jewel_map[y][x] = true;
        }

        //Set & execute orders
        cin >> num_order;
        char direction;
        int step;
        Point current_position(initial_position);
        jewel_map[current_position.y_][current_position.x_] = false;
        for(int i = 0; i < num_order; i++)
        {
            cin >> direction >> step;
            updateJewelMap(jewel_map, current_position, direction, step); //update jewel_map
        }

        if(isGetAllJewel(jewel_map, 21, 21)){ cout << "Yes" << endl; }
        else                                { cout << "No" << endl; }

    }


    return 0;
}