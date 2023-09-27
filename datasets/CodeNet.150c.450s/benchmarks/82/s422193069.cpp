#include <iostream>
#include <string>
using namespace std;

class Dice
{
  private:
    int top, front, right, left, back, bottom, temp;

  public:
    void set(int *nums)
    {
        this->top = nums[0];
        this->front = nums[1];
        this->right = nums[2];
        this->left = nums[3];
        this->back = nums[4];
        this->bottom = nums[5];
    }
    int getTop() { return this->top; }
    int getFront() { return this->front; }
    int getRight() { return this->right; }
    int getLeft() { return this->left; }
    int getBack() { return this->back; }
    int getBottom() { return this->bottom; }
    void east()
    {
        this->temp = this->top;
        this->top = this->left;
        this->left = this->bottom;
        this->bottom = this->right;
        this->right = this->temp;
    }
    void west()
    {
        this->temp = this->top;
        this->top = this->right;
        this->right = this->bottom;
        this->bottom = this->left;
        this->left = this->temp;
    }
    void north()
    {
        this->temp = this->top;
        this->top = this->front;
        this->front = this->bottom;
        this->bottom = this->back;
        this->back = this->temp;
    }
    void south()
    {
        this->temp = this->top;
        this->top = this->back;
        this->back = this->bottom;
        this->bottom = this->front;
        this->front = this->temp;
    }
};

int main(int argc, char *argv[])
{
    Dice dice;
    int nums[6];
    for (int i = 0; i < 6; i++)
        cin >> nums[i];
    dice.set(nums);

    int q_num, top, front;
    cin >> q_num;
    while (0 < q_num--)
    {
        cin >> top >> front;
        if (dice.getTop() == top && dice.getFront() == front)
        {
            cout << dice.getRight() << endl;
            continue;
        }
        else
        {
            if (dice.getRight() != front && dice.getLeft() != front)
            {
                while (dice.getFront() != front)
                {
                    dice.south();
                }
            }
            else
            {
                if (dice.getRight() == front)
                {
                    dice.west();
                    dice.south();
                }
                else
                {
                    dice.east();
                    dice.south();
                }
            }

            if (dice.getTop() != top)
            {
                while (dice.getTop() != top)
                {
                    dice.east();
                }
            }

            cout << dice.getRight() << endl;
            continue;
        }
    }

    return 0;
}
