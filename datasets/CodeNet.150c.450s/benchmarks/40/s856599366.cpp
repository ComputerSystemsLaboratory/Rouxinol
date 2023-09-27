
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Dice
{
private:
    int top_, bottom_, north_, south_, east_, west_;

    void rollingN()
    {
        int tmp = top_;
        top_    = south_;
        south_  = bottom_;
        bottom_ = north_;
        north_  = tmp; //top_;

    }
    void rollingS()
    {
        int tmp = top_;
        top_    = north_;
        north_  = bottom_;
        bottom_ = south_;
        south_  = tmp; //top_;

    }
    void rollingE()
    {
        int tmp = top_;
        top_    = west_;
        west_   = bottom_;
        bottom_ = east_;
        east_   = tmp; //top_;

    }
    void rollingW()
    {
        int tmp = top_;
        top_    = east_;
        east_   = bottom_;
        bottom_ = west_;
        west_   = tmp; //top_;

    }

public:
    Dice(const vector<int> &nums)
    {
        top_    = nums[0];
        bottom_ = nums[5];
        north_  = nums[4];
        south_  = nums[1];
        east_   = nums[2];
        west_   = nums[3];;
    }

    int getTop() const { return top_; }

    void exeOreder(const string &order)
    {
        size_t N = order.size();
        for(size_t i = 0; i < N; i++)
        {
            switch(order[i])
            {
            case 'N':
                rollingN();
                break;

            case 'S':
                rollingS();
                break;

            case 'E':
                rollingE();
                break;

            case 'W':
                rollingW();
                break;
            default:
                cout << "Error" << endl;
                break;

            }

        }

    }





};


int main()
{
    const int kNumDiceFaces = 6;
    vector<int> nums;
    nums.resize(kNumDiceFaces, 0);

    for(int i = 0; i < kNumDiceFaces; i++)
    {
        cin >> nums[i];
    }
    string order;
    cin >> order;

    Dice dice(nums);
    dice.exeOreder(order);
    cout << dice.getTop() << endl;

    return 0;
}