#include <iostream>
#include <vector>

using namespace std;

namespace {
    class Dice {
    private:
        vector<int> nums;
    public:
        Dice(int n1, int n2, int n3, int n4, int n5, int n6): nums{n1,n2,n3,n4,n5,n6} {}
        ~Dice() = default;

        int top() { return nums[0]; }

        void move_e() {
            vector<int> tmp;
            tmp.push_back(nums[3]);
            tmp.push_back(nums[1]);
            tmp.push_back(nums[0]);
            tmp.push_back(nums[5]);
            tmp.push_back(nums[4]);
            tmp.push_back(nums[2]);
            nums = tmp;
        }

        void move_n() {
            vector<int> tmp;
            tmp.push_back(nums[1]);
            tmp.push_back(nums[5]);
            tmp.push_back(nums[2]);
            tmp.push_back(nums[3]);
            tmp.push_back(nums[0]);
            tmp.push_back(nums[4]);
            nums = tmp;
        }

        void move_s() {
            vector<int> tmp;
            tmp.push_back(nums[4]);
            tmp.push_back(nums[0]);
            tmp.push_back(nums[2]);
            tmp.push_back(nums[3]);
            tmp.push_back(nums[5]);
            tmp.push_back(nums[1]);
            nums = tmp;
        }

        void move_w() {
            vector<int> tmp;
            tmp.push_back(nums[2]);
            tmp.push_back(nums[1]);
            tmp.push_back(nums[5]);
            tmp.push_back(nums[0]);
            tmp.push_back(nums[4]);
            tmp.push_back(nums[3]);
            nums = tmp;
        }
    };
}

int main() {
    int n1,n2,n3,n4,n5,n6;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;

    Dice d(n1,n2,n3,n4,n5,n6);

    string inst;
    cin >> inst;

    for (const char& c : inst) {
        switch(c) {
            case 'E':
                d.move_e();
                break;
            case 'N':
                d.move_n();
                break;
            case 'S':
                d.move_s();
                break;
            case 'W':
                d.move_w();
                break;
            default:
                break;
        }
    }

    cout << d.top() << endl;

    return 0;
}