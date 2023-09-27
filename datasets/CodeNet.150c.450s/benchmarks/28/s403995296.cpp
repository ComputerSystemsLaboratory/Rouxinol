#include <iostream>
#include <vector>

using std::cin;
using std::vector;

constexpr int MAX_PACKET = 100000;

int weight_num;
int tracks_num;
vector<int> weight;

bool canAlloc(long capacity);

int main()
{
    cin >> weight_num >> tracks_num;
    weight.reserve(weight_num);

    int max_weight = 0;
    long sum_weight = 0;
    for (auto i = 0; i < weight_num; i++) {
        int in;
        cin >> in;
        weight.push_back(in);
        if (weight.at(i) > max_weight) {
            max_weight = weight.at(i);
        }
        sum_weight += weight.at(i);
    }

    long low = max_weight;
    long upp = sum_weight;
    while (low < upp) {
        long mid = (low + upp) / 2;
        if (canAlloc(mid)) {
            upp = mid;
        } else {
            low = mid + 1;
        }
    }

    std::cout << low << std::endl;

    return 0;
}

bool canAlloc(long capacity)
{
    long alloced_in_one = 0;
    int track_id = 0;

    int i = 0;
    while (i < weight_num) {
        if (alloced_in_one + weight.at(i) <= capacity) {
            alloced_in_one += weight.at(i++);
        } else {
            alloced_in_one = 0;
            if (++track_id == tracks_num) {
                return false;
            }
        }
    }
    return true;
}