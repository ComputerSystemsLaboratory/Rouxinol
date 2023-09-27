#include <iostream>
#include <vector>

int max(const std::vector<int> &_vals)
{
    int max = _vals[0];
    for(int x : _vals) {
        if(max < x) { max = x; }
    }
    return max;
}

int min(const std::vector<int> &_vals)
{
    int min = _vals[0];
    for(int x : _vals) {
        if(min > x) { min = x; }
    }
    return min;
}

long sum(const std::vector<int> &_vals)
{
    long sum = 0;
    for(int x : _vals) {
        sum += x;
    }
    return sum;
}

int main(void)
{
    int num;
    std::cin >> num;
    std::vector<int> vals(num);
    for(int i = 0; i < num; i++) {
        std::cin >> vals[i];
    }
    int max_ = max(vals);
    int min_ = min(vals);
    long sum_ = sum(vals);
    std::cout << min_ << " " << max_ << " " << sum_ << std::endl;
    return 0;
}