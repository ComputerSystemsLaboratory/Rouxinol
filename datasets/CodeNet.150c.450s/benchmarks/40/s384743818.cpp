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
    void showTop()
    {
        cout << this->top << endl;
    }
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
    for (int i = 0; i < 6; i++) { cin >> nums[i]; }
    dice.set(nums);
    string direction;
    cin >> direction;

    for (int i = 0; i < direction.size(); i++)
    {
        switch (direction[i])
        {
        case 'E':
            dice.east();
            break;
        case 'W':
            dice.west();
            break;
        case 'N':
            dice.north();
            break;
        case 'S':
            dice.south();
            break;
        default:
            break;
        }
    }

    dice.showTop();

    return 0;
}
